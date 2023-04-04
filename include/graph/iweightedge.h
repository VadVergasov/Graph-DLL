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
   public:
    virtual void SetValue(std::any) = 0;

    virtual std::any GetValue() const = 0;

    ~IWeightEdge() override {}
};

}  // namespace graph
