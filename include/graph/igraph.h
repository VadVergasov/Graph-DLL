/*
IGraph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <unordered_set>

#include "iedge.h"
#include "ivertex.h"
#include "utils/vertex_hasher.h"

namespace graph {

class IGraph {
   protected:
    std::unordered_set<std::shared_ptr<IVertex>, VertexHasher> VertexList_;

   public:
    virtual size_t VertexCount() const = 0;

    virtual size_t EdgeCount() const = 0;

    virtual void AddEdge(const std::shared_ptr<IVertex>&,
                         const std::shared_ptr<IVertex>&) = 0;

    virtual void AddEdge(const IEdge&) = 0;

    virtual void RemoveEdge(const IEdge&) = 0;

    const std::unordered_set<std::shared_ptr<IVertex>, VertexHasher>&
    GetVertexes() const {
        return VertexList_;
    }

    std::unordered_set<std::shared_ptr<IVertex>, VertexHasher>& GetVertexes() {
        return const_cast<
            std::unordered_set<std::shared_ptr<IVertex>, VertexHasher>&>(
            static_cast<const IGraph&>(*this).GetVertexes());
    }
};

};  // namespace graph
