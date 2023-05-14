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
    size_t id_;
    std::vector<std::shared_ptr<IEdge>> edges_;

   public:
    IVertex(const std::vector<std::shared_ptr<IEdge>>& edges = {})
        : id_(newId++), edges_(edges) {}

    IVertex(const IVertex& other) : id_(other.id_), edges_(other.edges_) {}

    IVertex(IVertex&& other)
        : id_(std::move(other.id_)), edges_(std::move(other.edges_)) {}

    IVertex& operator=(const IVertex& other) {
        id_ = other.id_;
        edges_ = other.edges_;
        return *this;
    }

    IVertex& operator=(IVertex&& other) {
        id_ = std::move(other.id_);
        edges_ = std::move(other.edges_);
        return *this;
    }

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

    void RemoveNeighbor(const IVertex& vertex);

    size_t GetId() const { return id_; }

    friend static void swap(IVertex& lhs, IVertex& rhs) {
        IVertex tmp = std::move(lhs);
        lhs = std::move(rhs);
        rhs = std::move(tmp);
    }
};

}  // namespace graph
