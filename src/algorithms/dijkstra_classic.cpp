/*
DijkstraClassic  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "algorithms/dijkstra_classic.h"

#include <ranges>

namespace graph {

const std::vector<std::any>& DijkstraClassic::GetDistance(
    const IGraph& graph, const IVertex& start) {
    std::vector<bool> used(graph.VertexCount(), false);
    Distances_.resize(graph.VertexCount(), MaxValue_);
    Distances_[start.GetId()] = MinValue_;

    for (const auto& current : std::ranges::views::iota(static_cast<size_t>(0),
                                                        graph.VertexCount())) {
        long long next = -1;
        for (const auto& j : std::ranges::views::iota(static_cast<size_t>(0),
                                                      graph.VertexCount())) {
            if (!used[j] &&
                (next == -1 || less(Distances_[j], Distances_[next]))) {
                next = j;
            }
        }
        if (!less(Distances_[next], MaxValue_) &&
            !less(MaxValue_, Distances_[next])) {
            break;
        }
        used[next] = true;
        // for (const auto& j : std::ranges::views::iota(static_cast<size_t>(0),
        //                                               graph.EdgeCount())) {
        // }
    }

    return Distances_;
}

}  // namespace graph
