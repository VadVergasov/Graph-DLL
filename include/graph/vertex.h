#pragma once

#include "ivertex.h"

namespace graph {

class Vertex : IVertex {
   private:
    std::any value;

   public:
    Vertex(std::any value) : value(value) {}

    std::any GetValue() const override { return value; }

    void SetValue(std::any value) {
        this->value = value;
    }
};

}  // namespace graph
