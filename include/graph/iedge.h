/*
IEdge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class IVertex;

class IEdge {
   protected:
    std::weak_ptr<IVertex> end_;

   public:
    IEdge(const decltype(end_)& end) : end_(end) {}

    IEdge(const std::shared_ptr<IVertex>& end) : end_(end) {}

    virtual ~IEdge() {}

    std::shared_ptr<IVertex> End() const { return end_.lock(); }
};

}  // namespace graph
