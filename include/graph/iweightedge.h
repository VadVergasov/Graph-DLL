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
