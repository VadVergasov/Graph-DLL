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
   protected:
    std::weak_ptr<IVertex> start;

   public:
    IBidirectionalEdge(const decltype(start)& start, const decltype(end)& end)
        : start(start), IEdge(end) {}

    IBidirectionalEdge(const std::shared_ptr<IVertex>& start,
                       const std::shared_ptr<IVertex>& end)
        : start(start), IEdge(end) {}

    ~IBidirectionalEdge() override {}

    virtual IVertex& Start() const { return *start.lock(); }
};

}  // namespace graph
