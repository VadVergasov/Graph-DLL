/*
DijkstraClassic  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <any>
#include <functional>
#include <ranges>
#include <unordered_map>
#include <vector>

#include "graph/bidirectional_graph.h"
#include "graph/weight_bidirectional_edge.h"

namespace graph {

class DijkstraClassic {
   protected:
    std::any MaxValue_;
    std::any MinValue_;
    std::unordered_map<std::shared_ptr<IVertex>, std::any, VertexHasher>
        Distances_;
    std::function<bool(const std::any&, const std::any&)> less;
    std::function<std::any(const std::any&, const std::any&)> sum;

   public:
    DijkstraClassic() = delete;

    DijkstraClassic(
        std::function<bool(const std::any&, const std::any&)> less,
        std::function<std::any(const std::any&, const std::any&)> sum,
        const std::any& maxValue, const std::any& minValue)
        : less(less), sum(sum), MaxValue_(maxValue), MinValue_(minValue) {}

    DijkstraClassic(const DijkstraClassic& other) = default;

    DijkstraClassic(DijkstraClassic&& other) = default;

    virtual const std::unordered_map<std::shared_ptr<IVertex>, std::any,
                                     VertexHasher>&
    GetDistance(const BidirectionalGraph&, const IVertex&);
};

}  // namespace graph
