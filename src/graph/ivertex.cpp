/*
IVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "graph/ivertex.h"

namespace graph {

void IVertex::RemoveNeighbor(const IVertex& vertex) {
    for (auto it = edges_.begin(); it != edges_.end(); it++) {
        if ((*it)->End().GetId() == vertex.GetId()) {
            edges_.erase(it);
            break;
        }
    }
}

}  // namespace graph
