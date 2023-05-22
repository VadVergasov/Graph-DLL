/*
DijkstraClassic  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "algorithms/dijkstra_classic.h"

namespace graph {

const std::unordered_map<std::shared_ptr<IVertex>, std::any, VertexHasher>&
DijkstraClassic::GetDistance(const BidirectionalGraph& graph,
                             const IVertex& start) {
    std::unordered_map<std::shared_ptr<IVertex>, bool, VertexHasher> used(
        graph.VertexCount());
    Distances_.rehash(graph.VertexCount());
    for (const auto& current : graph.GetVertexes()) {
        Distances_[current] = MaxValue_;
    }
    Distances_[std::make_shared<IVertex>(start)] = MinValue_;

    for (const auto& iteration : std::ranges::views::iota(
             static_cast<size_t>(0), graph.VertexCount())) {
        std::shared_ptr<IVertex> current = nullptr;
        for (const auto& j : graph.GetVertexes()) {
            if (!used[j] && (current == nullptr ||
                             less(Distances_[j], Distances_[current]))) {
                current = j;
            }
        }
        if (!less(Distances_[current], MaxValue_) &&
            !less(MaxValue_, Distances_[current])) {
            break;
        }
        used[current] = true;
        for (const auto& j : current->GetEdges()) {
            auto next =
                (j->End()->GetId() == current->GetId())
                    ? std::dynamic_pointer_cast<IBidirectionalEdge>(j)->Start()
                    : j->End();
            auto length = std::dynamic_pointer_cast<WeightBidirectionalEdge>(j)
                              ->GetValue();
            if (less(sum(Distances_[current], length), Distances_[next])) {
                Distances_[next] = sum(Distances_[current], length);
            }
        }
    }

    return Distances_;
}

}  // namespace graph
