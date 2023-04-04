/*
IGraph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "iedge.h"
#include "ivertex.h"

namespace graph {

class IGraph {
   public:
    virtual size_t VertexCount() const = 0;

    virtual size_t EdgeCount() const = 0;

    virtual void AddEdge(const IVertex&, const IVertex&) = 0;

    virtual void AddEdge(const IEdge&) = 0;

    virtual void RemoveEdge(const IEdge&) = 0;
};

};  // namespace graph
