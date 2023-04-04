/*
BidirectionalEdge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ibidirectional_edge.h"

namespace graph {

class BidirectionalEdge : public IBidirectionalEdge {
   protected:
    IVertex& start;
    IVertex& end;

   public:
    IVertex& next() const override { return end; }

    IVertex& prev() const override { return start; }
};

}  // namespace graph
