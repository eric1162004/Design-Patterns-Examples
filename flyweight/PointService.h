//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_POINTSERVICE_H
#define DESIGN_PATTERNS_EXAMPLES_POINTSERVICE_H


#include <vector>
#include "Point.h"
#include "PointIconFactory.h"

class PointService {
public:
    std::vector<Point> getPoints();

private:
    PointIconFactory iconFactory{};
};


#endif //DESIGN_PATTERNS_EXAMPLES_POINTSERVICE_H
