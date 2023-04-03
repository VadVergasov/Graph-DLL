#pragma once

#include <any>

namespace graph {

class IVertex {
   protected:
    size_t id;

   public:
    IVertex() = delete;

    IVertex(size_t id) : id(id) {}

    IVertex(const IVertex& other) : id(other.id) {}

    virtual std::any GetValue() const = 0;

    size_t GetId() const { return id; }

    virtual ~IVertex() = 0;

    friend class EdgeHasher;
};

}  // namespace graph
