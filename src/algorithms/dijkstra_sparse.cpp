/*
DijkstraSparse  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "algorithms/dijkstra_sparse.h"

namespace graph {

const std::vector<std::any>& DijkstraSparse::GetDistance(const IGraph&, const IVertex&) override {
    return Distances_;
}

};  // namespace graph
