#include <memory>
#include <vector>

#include "igraph.h"

namespace graph {

class OrientedGraph : IGraph {
   protected:
    std::vector<std::shared_ptr<IVertex>> VertexList_;
    std::vector<std::shared_ptr<IEdge>> EdgeList_;

   public:
    size_t VertexCount() const override { return VertexList_.size(); }

    size_t EdgeCount() const override { return EdgeList_.size(); }

    void AddEdge(const IVertex& start, const IVertex& end) override {}

    void AddEdge(const IEdge& edge) override {}

    void RemoveEdge(const IEdge& edge) override {}
};

};  // namespace graph
