//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_POINTICON_H
#define DESIGN_PATTERNS_EXAMPLES_POINTICON_H


#include <vector>
#include "PointType.h"

class PointIcon {
public:
    PointIcon(PointType type, const std::vector<unsigned char> &icon);
    const PointType getType() const;
private:
    const PointType type;
    const std::vector<unsigned char> icon; // ~20kB
};


#endif //DESIGN_PATTERNS_EXAMPLES_POINTICON_H
