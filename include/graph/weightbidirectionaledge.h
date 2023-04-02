#pragma once

#include "ibidirectionaledge.h"
#include "iweightedge.h"

namespace graph {

class WeightBidirectionalEdge : IWeightEdge, IBidirectionalEdge {
   protected:
    std::any value;

   public:
    void SetValue(std::any value) override { this->value = value; }

    std::any GetValue() const override { return value; }
};

};  // namespace graph
