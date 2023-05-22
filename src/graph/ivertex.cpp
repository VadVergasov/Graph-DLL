/*
IVertex  Copyright (C) 2023  VadVergasov
This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
This is free software, and you are welcome to redistribute it
under certain conditions; type `show c' for details.
*/
#include "graph/ivertex.h"

#include "graph/ibidirectional_edge.h"

namespace graph {

void IVertex::RemoveNeighbor(const IVertex& vertex) {
    for (auto it = edges_.begin(); it != edges_.end(); it++) {
        const auto edge = *it;
        if (auto bidirectional_edge =
                std::dynamic_pointer_cast<const IBidirectionalEdge>(edge)) {
            auto start = bidirectional_edge->Start(), end = edge->End();
            if (start->GetId() != this->GetId()) {
                swap(start, end);
            }
            if (end->GetId() == vertex.GetId()) {
                for (auto other = end->edges_.begin();
                     other != end->edges_.end(); other++) {
                    if (edge == *it) {
                        end->edges_.erase(it);
                        break;
                    }
                }
                edges_.erase(it);
                break;
            }
        } else {
            if (edge->End()->GetId() == vertex.GetId()) {
                edges_.erase(it);
                break;
            }
        }
    }
}

}  // namespace graph
