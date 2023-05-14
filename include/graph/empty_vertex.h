/*
EmptyVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class EmptyVertex final : public IVertex {
   public:
    EmptyVertex(const std::vector<std::shared_ptr<IEdge>> edges = {})
        : IVertex(edges) {}

    EmptyVertex(const EmptyVertex& other) : IVertex(other) {}

    EmptyVertex(EmptyVertex&& other) : IVertex(std::move(other)) {}

    ~EmptyVertex() override {}

    EmptyVertex& operator=(const EmptyVertex& other) {
        static_cast<IVertex>(*this) = other;
        return *this;
    }

    EmptyVertex& operator=(EmptyVertex&& other) {
        static_cast<IVertex>(*this) = std::move(other);
        return *this;
    }
};

}  // namespace graph
