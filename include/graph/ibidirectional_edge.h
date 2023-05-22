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
    std::weak_ptr<IVertex> start_;

   public:
    IBidirectionalEdge(const decltype(start_)& start, const decltype(end_)& end)
        : start_(start), IEdge(end) {}

    IBidirectionalEdge(const std::shared_ptr<IVertex>& start,
                       const std::shared_ptr<IVertex>& end)
        : start_(start), IEdge(end) {}

    ~IBidirectionalEdge() override {}

    std::shared_ptr<IVertex> Start() const { return start_.lock(); }
};

}  // namespace graph
