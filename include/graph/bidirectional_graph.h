/*
BidirectionalGraph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include <memory>
#include <vector>

#include "ibidirectional_edge.h"
#include "igraph.h"

namespace graph {

class BidirectionalGraph : public IGraph {
   protected:
    std::vector<std::shared_ptr<IVertex>> VertexList_;
    std::vector<std::shared_ptr<IBidirectionalEdge>> EdgeList_;

   public:
    size_t VertexCount() const override { return VertexList_.size(); }

    size_t EdgeCount() const override { return EdgeList_.size(); }
};

};  // namespace graph
