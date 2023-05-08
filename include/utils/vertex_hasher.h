/*
Edge Hasher  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <functional>

#include "../graph/iedge.h"

namespace graph {
class VertexHasher {
    size_t operator()(IVertex& edge) {
        return std::hash<size_t>()(edge.GetId());
    }
};

}  // namespace graph