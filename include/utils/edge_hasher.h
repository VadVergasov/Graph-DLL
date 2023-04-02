#pragma once

#include <functional>

#include "../graph/iedge.h"

namespace graph {
class EdgeHasher {
    // TODO
    // unsigned long long operator()(IEdge& edge) {
    //     return std::hash<unsigned long long>()(std::any_cast<unsigned long long>(edge.start.value));
    // }
};

}  // namespace graph
