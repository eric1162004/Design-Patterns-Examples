//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_POINTICONFACTORY_H
#define DESIGN_PATTERNS_EXAMPLES_POINTICONFACTORY_H


#include <map>
#include "PointIcon.h"

class PointIconFactory {
public:
    PointIcon getPointIcon(PointType type);
private:
    std::map<PointType, PointIcon> icons;
};


#endif //DESIGN_PATTERNS_EXAMPLES_POINTICONFACTORY_H
