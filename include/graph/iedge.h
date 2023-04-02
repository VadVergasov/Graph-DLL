#pragma once

#include "ivertex.h"

namespace graph {

class IEdge {
    friend class EdgeHasher;

   public:
    virtual IVertex& next() const = 0;

    virtual ~IEdge() {}
};

}  // namespace graph
