#pragma once

#include <any>
#include <functional>
#include <vector>

#include "graph/igraph.h"

namespace graph {

class DijkstraClassic {
   protected:
    std::any MaxValue_;
    std::any MinValue_;
    std::vector<std::any> Distances_;
    std::function<bool(const std::any&, const std::any&)> less;
    std::function<std::any(const std::any&, const std::any&)> sum;

   public:
    DijkstraClassic() = delete;

    DijkstraClassic(
        std::function<bool(const std::any&, const std::any&)> less,
        std::function<std::any(const std::any&, const std::any&)> sum,
        const std::any& maxValue, const std::any& minValue)
        : less(less), sum(sum), MaxValue_(maxValue), MinValue_(minValue) {}

    const std::vector<std::any>& GetDistance(const IGraph&, const IVertex&);
};

}  // namespace graph
