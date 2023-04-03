#include <memory>
#include <vector>

#include "ibidirectionaledge.h"
#include "igraph.h"

namespace graph {

class BidirectionalGraph : IGraph {
   protected:
    std::vector<std::shared_ptr<IVertex>> VertexList_;
    std::vector<std::shared_ptr<IBidirectionalEdge>> EdgeList_;

   public:
    size_t VertexCount() const override { return VertexList_.size(); }

    size_t EdgeCount() const override { return EdgeList_.size(); }
};

};  // namespace graph
