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
    std::any value;

   public:
    Vertex(size_t id, std::any value) : IVertex(id), value(value) {}

    Vertex(const Vertex& other) : IVertex(other), value(other.value) {}

    std::any GetValue() const override { return value; }

    void SetValue(std::any value) { this->value = value; }
};

}  // namespace graph
