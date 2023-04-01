#pragma once

#include "private/ivertex.h"

namespace graph {

class Vertex : IVertex {
   public:
    Vertex(std::any value) : value(value) {}

    std::any GetValue() const override { return std::any(); }
};

}  // namespace graph
