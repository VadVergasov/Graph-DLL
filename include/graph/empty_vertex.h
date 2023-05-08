/*
EmptyVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class EmptyVertex : public IVertex {
   protected:
    size_t id;
    std::vector<IEdge*> edges;

   public:
    EmptyVertex(size_t id, const std::vector<IEdge*> edges = {})
        : id(id), edges(edges) {}

    EmptyVertex(const EmptyVertex& other) : id(other.id), edges(other.edges) {}

    const std::vector<IEdge*>& GetEdges() const override { return edges; }
};

}  // namespace graph
