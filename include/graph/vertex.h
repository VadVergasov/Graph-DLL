/*
Vertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class Vertex final : IVertex {
   protected:
    std::any value;

   public:
    Vertex(std::any value, const std::vector<std::shared_ptr<IEdge>> edges = {})
        : IVertex(edges), value(value) {}

    Vertex(const Vertex& other) : IVertex(other), value(other.value) {}

    ~Vertex() override {}

    Vertex& operator=(const Vertex& other) {
        static_cast<IVertex>(*this) = other;
        value = other.value;
        return *this;
    }

    Vertex& operator=(Vertex&& other) {
        static_cast<IVertex>(*this) = std::move(other);
        value = std::move(other.value);
        return *this;
    }

    std::any GetValue() const { return value; }

    void SetValue(std::any value) { this->value = value; }
};

}  // namespace graph
