/*
IVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include <any>
#include <vector>

#include "iedge.h"

namespace graph {

class IEdge;

class IVertex {
   public:
    virtual size_t GetId() const = 0;

    virtual const std::vector<IEdge*>& GetEdges() const = 0;

    std::vector<IEdge*>& GetEdges() {
        return const_cast<std::vector<IEdge*>&>(
            static_cast<const IVertex&>(*this).GetEdges());
    }

    virtual ~IVertex() = 0;

    friend class EdgeHasher;
};

}  // namespace graph
