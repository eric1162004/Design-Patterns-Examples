//
// Created by eric1 on 6/13/2024.
//

#include "PointIcon.h"

PointIcon::PointIcon(PointType type, const std::vector<unsigned char> &icon) : type(type), icon(icon) {}

const PointType PointIcon::getType() const {
    return type;
}
