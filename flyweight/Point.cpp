//
// Created by eric1 on 6/13/2024.
//

#include <cstdio>
#include <string>
#include "Point.h"

Point::Point(int x, int y, const PointIcon &pointIcon) : x(x), y(y), pointIcon(pointIcon) {}

void Point::draw() {
    std::string pointTypeStr;
    PointType pointType = pointIcon.getType();

    switch (pointType) {
        case PointType::CAFE:
            pointTypeStr = "Cafe";
            break;
        case PointType::HOSPITAL:
            pointTypeStr = "Hospital";
            break;
        case PointType::RESTAURANT:
            pointTypeStr = "Restaurant";
            break;
    }

    std::printf("%s (%d,%d)", pointTypeStr.c_str(), x, y);
}

