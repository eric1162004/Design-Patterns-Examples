//
// Created by eric1 on 6/13/2024.
//

#include "PointIconFactory.h"

PointIcon PointIconFactory::getPointIcon(PointType type) {
    if(!icons.contains(type)){
        PointIcon newPointIcon{type, std::vector<unsigned char>()};
        icons.insert({type, newPointIcon});
    }

    return icons.at(type);
}
