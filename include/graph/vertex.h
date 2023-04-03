#pragma once

#include "ivertex.h"

namespace graph {

class Vertex : IVertex {
   protected:
    std::any value;

   public:
    Vertex(size_t id, std::any value) : IVertex(id), value(value) {}

    Vertex(const Vertex& other) : IVertex(other), value(other.value) {}

    std::any GetValue() const override { return value; }

    void SetValue(std::any value) { this->value = value; }
};

}  // namespace graph
