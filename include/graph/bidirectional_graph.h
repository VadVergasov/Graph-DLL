/*
BidirectionalGraph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include <memory>
#include <unordered_set>
#include <vector>

#include "ibidirectional_edge.h"
#include "igraph.h"
#include "utils/vertex_hasher.h"

namespace graph {

class BidirectionalGraph : public IGraph {
   protected:
    std::unordered_set<std::shared_ptr<IVertex>, VertexHasher> VertexList_;
    std::vector<std::shared_ptr<IBidirectionalEdge>> EdgeList_;

   public:
    BidirectionalGraph() = default;

    size_t VertexCount() const override { return VertexList_.size(); }

    size_t EdgeCount() const override { return EdgeList_.size(); }

    void AddEdge(const IVertex&, const IVertex&) override;

    void AddEdge(const IEdge&) override;

    void RemoveEdge(const IEdge&) override;
};

};  // namespace graph
