/*
IWeightEdge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "iedge.h"

namespace graph {

class IWeightEdge : public virtual IEdge {
   protected:
    std::any value_;

   public:
    IWeightEdge(const decltype(end_)& end, std::any value)
        : IEdge(end), value_(value) {}

    IWeightEdge(const std::shared_ptr<IVertex>& end, std::any value)
        : IEdge(end), value_(value) {}

    ~IWeightEdge() override {}

    virtual void SetValue(std::any value) { value_ = value; };

    virtual std::any GetValue() const { return value_; };
};

}  // namespace graph
