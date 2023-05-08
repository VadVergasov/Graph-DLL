/*
EmptyVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class EmptyVertex final : public IVertex {
   public:
    EmptyVertex(const std::vector<std::shared_ptr<IEdge>> edges = {})
        : IVertex(edges) {}

    EmptyVertex(const EmptyVertex& other) : IVertex(other) {}
};

}  // namespace graph
