/*
DijkstraSparse  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "algorithms/dijkstra_sparse.h"

namespace graph {

const std::unordered_map<std::shared_ptr<IVertex>, std::any, VertexHasher>& DijkstraSparse::GetDistance(const BidirectionalGraph&, const IVertex&) {
    return Distances_;
}

};  // namespace graph
