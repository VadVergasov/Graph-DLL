#pragma once

#include <any>

namespace graph {

class IVertex {
   private:
    std::any value;

   public:
    virtual std::any GetValue() const = 0;

    virtual ~IVertex() = 0;
};

}  // namespace graph
