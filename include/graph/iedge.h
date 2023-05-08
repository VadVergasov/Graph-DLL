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
    std::weak_ptr<IVertex> end;

   public:
    IEdge(const decltype(end)& end) : end(end) {}

    IEdge(const std::shared_ptr<IVertex>& end) : end(end) {}

    virtual ~IEdge() {}

    virtual IVertex& Next() const { return *end.lock(); }
};

}  // namespace graph
