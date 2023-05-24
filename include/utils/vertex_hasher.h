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
    size_t operator()(const std::shared_ptr<IVertex>& vertex) const {
        return std::hash<size_t>()(vertex->GetId());
    }

    bool operator()(const std::shared_ptr<IVertex>& lhs, const std::shared_ptr<IVertex>& rhs) const {
        return lhs->GetId() == rhs->GetId();
    }
};

}  // namespace graph
