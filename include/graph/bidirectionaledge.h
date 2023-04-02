#pragma once

#include "ibidirectionaledge.h"

namespace graph {

class BidirectionalEdge : IBidirectionalEdge {
   protected:
    IVertex& start;
    IVertex& end;

   public:
    IVertex& next() const override { return end; }

    IVertex& prev() const override { return start; }
};

}  // namespace graph
