#pragma once

#include "ivertex.h"

namespace graph {

class IEdge {
   protected:
    IVertex& start;
    IVertex& end;

    friend class EdgeHasher;

   public:
    virtual IVertex& next() const = 0;

    virtual ~IEdge() = 0;
};

}  // namespace graph