#pragma once

#include "iedge.h"

namespace graph {

class IBidirectionalEdge : public virtual IEdge {
   public:
    virtual IVertex& prev() const = 0;
};

}  // namespace graph
