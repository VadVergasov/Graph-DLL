#pragma once

#include "ivertex.h"

namespace graph {

class IEdge {
   private:
    IVertex& start;
    IVertex& end;

    friend class EdgeHasher;

   public:
    virtual IVertex& next() const = 0;

    virtual ~IEdge() = 0;
};

}  // namespace graph
