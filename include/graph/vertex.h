/*
Vertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class Vertex : IVertex {
   protected:
    size_t id;
    std::vector<IEdge*> edges;
    std::any value;

   public:
    Vertex(size_t id, std::any value, const std::vector<IEdge*> edges = {})
        : id(id), edges(edges), value(value) {}

    Vertex(const Vertex& other)
        : id(other.id), edges(other.edges), value(other.value) {}

    std::any GetValue() const { return value; }

    void SetValue(std::any value) { this->value = value; }

    size_t GetId() const { return id; }

    const std::vector<IEdge*>& GetEdges() const override { return edges; }
};

}  // namespace graph
