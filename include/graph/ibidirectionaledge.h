#pragma once

#include "iedge.h"

namespace graph {

class IBidirectionalEdge : IEdge {
   public:
    virtual IVertex& prev() = 0;
};

}  // namespace graph
