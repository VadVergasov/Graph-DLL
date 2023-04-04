/*
Weight Bidirectional Edge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
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
