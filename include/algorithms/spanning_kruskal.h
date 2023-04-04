/*
Spanning Tree by Kruskal algorithm  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "graph/bidirectional_graph.h"

namespace graph {

class SpanningKruskal {
   public:
    virtual BidirectionalGraph GetSpanning();
};

class SpanningKruskalDSU : public SpanningKruskal {
   public:
    BidirectionalGraph GetSpanning() override;
};

};  // namespace graph
