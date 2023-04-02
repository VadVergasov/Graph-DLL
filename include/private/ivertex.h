#pragma once

#include <any>

namespace graph {

class IVertex {
   protected:
    std::any value;

   public:
    IVertex() = default;

    IVertex(std::any value) : value(value) {}

    IVertex(const IVertex& other) : value(other.value) {}

    IVertex(const IVertex&& other) : value(std::move(other.value)) {}

    virtual std::any GetValue() const = 0;

    virtual ~IVertex() = 0;
};

}  // namespace graph
