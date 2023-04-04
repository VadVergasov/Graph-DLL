/*
IEdge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "ivertex.h"

namespace graph {

class IEdge {
    friend class EdgeHasher;

   public:
    virtual IVertex& next() const = 0;

    virtual ~IEdge() {}
};

}  // namespace graph
