//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_POINT_H
#define DESIGN_PATTERNS_EXAMPLES_POINT_H


#include <vector>
#include "PointType.h"
#include "PointIcon.h"

class Point {
public:
    Point(int x, int y, const PointIcon &pointIcon);
    void draw();

private:
    int x; // 4bytes
    int y; // 4bytes
    PointIcon pointIcon;
};


#endif //DESIGN_PATTERNS_EXAMPLES_POINT_H
