/*
Oriented Graph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <memory>
#include <vector>

#include "igraph.h"

namespace graph {

class OrientedGraph : public IGraph {
   protected:
    std::vector<std::shared_ptr<IEdge>> EdgeList_;

   public:
    size_t VertexCount() const override { return VertexList_.size(); }

    size_t EdgeCount() const override { return EdgeList_.size(); }

    void AddEdge(const std::shared_ptr<IVertex>& start,
                 const std::shared_ptr<IVertex>& end) override;

    void AddEdge(const IEdge& edge) override;

    void RemoveEdge(const IEdge& edge) override;
};

};  // namespace graph
