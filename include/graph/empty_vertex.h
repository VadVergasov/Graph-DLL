/*
EmptyVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class Vertex : public IVertex {
   public:
    Vertex() = default;

    Vertex(const Vertex& other) : IVertex(other) {}

    std::any GetValue() const override { return std::any{nullptr}; }
};

}  // namespace graph
