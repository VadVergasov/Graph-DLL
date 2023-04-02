#pragma once

#include "iedge.h"

namespace graph {

class IBidirectionalEdge : public virtual IEdge {
   public:
    virtual IVertex& prev() = 0;
};

}  // namespace graph
