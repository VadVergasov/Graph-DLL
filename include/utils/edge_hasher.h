#include <functional>

#include "../private/iedge.h"

class EdgeHasher {
    unsigned long long operator()(IEdge& edge){
        return std::hash<unsigned long long>()();
    }
};
