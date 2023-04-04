/*
IVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
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
