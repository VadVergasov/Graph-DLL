/*
Vertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class Vertex final : public IVertex {
   protected:
    std::any Value_;

   public:
    Vertex(size_t id) : IVertex(id) {}

    Vertex(std::any value, const std::vector<std::shared_ptr<IEdge>> edges = {})
        : IVertex(edges), Value_(value) {}

    Vertex(const Vertex& other) : IVertex(other), Value_(other.Value_) {}

    ~Vertex() override {}

    Vertex& operator=(const Vertex& other) {
        static_cast<IVertex>(*this) = other;
        Value_ = other.Value_;
        return *this;
    }

    Vertex& operator=(Vertex&& other) {
        static_cast<IVertex>(*this) = std::move(other);
        Value_ = std::move(other.Value_);
        return *this;
    }

    std::any GetValue() const { return Value_; }

    void SetValue(std::any value) { Value_ = value; }
};

}  // namespace graph
