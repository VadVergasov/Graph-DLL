/*
BidirectionalGraph  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "graph/bidirectional_graph.h"

namespace graph {

void BidirectionalGraph::AddEdge(const std::shared_ptr<IVertex>& first,
                                 const std::shared_ptr<IVertex>& second) {
    const auto& [firstVertex, firstInserted] = VertexList_.insert(first);
    const auto& [secondVertex, secondInserted] = VertexList_.insert(second);
    auto edge =
        std::make_shared<IBidirectionalEdge>(*firstVertex, *secondVertex);
    (*firstVertex)->AddNeighbor(edge);
    (*secondVertex)->AddNeighbor(edge);
    EdgeList_.push_back(edge);
}

void BidirectionalGraph::AddEdge(const IEdge& edge) {
    if (auto realEdge =
            dynamic_cast<const IBidirectionalEdge*>(std::addressof(edge))) {
        AddEdge(realEdge->Start(), realEdge->End());
    } else {
        throw std::runtime_error("Invalid type of edge in AddEdge method");
    }
}

void BidirectionalGraph::RemoveEdge(const IEdge& edge) {}

};  // namespace graph
