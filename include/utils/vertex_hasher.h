/*
Edge Hasher  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "../graph/iedge.h"

namespace graph {
class VertexHasher {
   public:
    size_t operator()(const std::shared_ptr<IVertex>& edge) const {
        return std::hash<size_t>()(edge->GetId());
    }
};

}  // namespace graph
