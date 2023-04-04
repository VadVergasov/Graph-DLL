/*
DijkstraSparse  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "dijkstra_classic.h"

namespace graph {

class DijkstraSparse : public DijkstraClassic {
   public:
    const std::vector<std::any>& GetDistance(const IGraph&, const IVertex&);
};

};  // namespace graph
