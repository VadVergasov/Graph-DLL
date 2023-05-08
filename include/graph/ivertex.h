/*
IVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <any>
#include <memory>
#include <vector>

#include "iedge.h"

namespace graph {

class IEdge;

class IVertex {
   private:
    inline static size_t new_id = 0;

   protected:
    const size_t id;
    std::vector<std::shared_ptr<IEdge>> edges;

   public:
    IVertex(const std::vector<std::shared_ptr<IEdge>>& edges = {})
        : id(new_id++), edges(edges) {}

    IVertex(const IVertex& other) : id(other.id), edges(other.edges) {}

    const std::vector<std::shared_ptr<IEdge>>& GetEdges() const {
        return edges;
    }

    std::vector<std::shared_ptr<IEdge>>& GetEdges() {
        return const_cast<std::vector<std::shared_ptr<IEdge>>&>(
            static_cast<const IVertex&>(*this).GetEdges());
    }

    virtual ~IVertex() {}

    IEdge& AddNeighbor(const std::shared_ptr<IEdge>& edge) {
        return *GetEdges().emplace_back(edge);
    }

    size_t GetId() const { return id; }
};

}  // namespace graph
