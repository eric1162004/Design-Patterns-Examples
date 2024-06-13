//
// Created by eric1 on 6/13/2024.
//

#include "PointService.h"

std::vector<Point> PointService::getPoints() {
    std::vector<Point> points;
    Point point (1,2,iconFactory.getPointIcon(PointType::CAFE));
    points.push_back(point);
    return points;
}
