#pragma once

#include "ivertex.h"

namespace graph {

class Vertex : IVertex {
   public:
    Vertex() = default;

    Vertex(const Vertex& other) : IVertex(other) {}

    std::any GetValue() const override { return std::any{nullptr}; }
};

}  // namespace graph
