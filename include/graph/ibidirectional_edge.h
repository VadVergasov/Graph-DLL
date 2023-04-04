/*
IBidirectionalEdge  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#pragma once

#include "iedge.h"

namespace graph {

class IBidirectionalEdge : public virtual IEdge {
   public:
    virtual IVertex& prev() const = 0;
};

}  // namespace graph
