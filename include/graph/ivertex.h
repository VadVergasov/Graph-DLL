#pragma once

#include <any>

namespace graph {

class IVertex {
   public:
    IVertex() = default;

    virtual std::any GetValue() const = 0;

    virtual ~IVertex() = 0;

    friend class EdgeHasher;
};

}  // namespace graph
