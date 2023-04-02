#pragma once

#include "iedge.h"

namespace graph {

class IWeightEdge : IEdge {
   protected:
    std::any value;

   public:
    void SetValue(std::any) {}

    std::any GetValue() const { return value; }
};

}  // namespace graph
