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
    inline static size_t newId = 0;

   protected:
    const size_t id_;
    std::vector<std::shared_ptr<IEdge>> edges_;

   public:
    IVertex(const std::vector<std::shared_ptr<IEdge>>& edges = {})
        : id_(newId++), edges_(edges) {}

    IVertex(const IVertex& other) : id_(other.id_), edges_(other.edges_) {}

    const std::vector<std::shared_ptr<IEdge>>& GetEdges() const {
        return edges_;
    }

    std::vector<std::shared_ptr<IEdge>>& GetEdges() {
        return const_cast<std::vector<std::shared_ptr<IEdge>>&>(
            static_cast<const IVertex&>(*this).GetEdges());
    }

    virtual ~IVertex() {}

    IEdge& AddNeighbor(const std::shared_ptr<IEdge>& edge) {
        return *GetEdges().emplace_back(edge);
    }

    size_t GetId() const { return id_; }
};

}  // namespace graph
