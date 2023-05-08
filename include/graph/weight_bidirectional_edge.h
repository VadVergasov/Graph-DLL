/*
Weight Bidirectional Edge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ibidirectional_edge.h"
#include "iweight_edge.h"

namespace graph {

class WeightBidirectionalEdge final : public IWeightEdge,
                                      public IBidirectionalEdge {
   public:
    WeightBidirectionalEdge(const decltype(start_)& start,
                            const decltype(end_)& end,
                            const decltype(value_)& value)
        : IBidirectionalEdge(start, end), IWeightEdge(end, value), IEdge(end) {}

    WeightBidirectionalEdge(const std::shared_ptr<IVertex>& start,
                            const std::shared_ptr<IVertex>& end,
                            const decltype(value_)& value)
        : IBidirectionalEdge(start, end), IWeightEdge(end, value), IEdge(end) {}

    ~WeightBidirectionalEdge() override {}
};

};  // namespace graph
