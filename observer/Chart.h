//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_CHART_H
#define DESIGN_PATTERNS_EXAMPLES_CHART_H

#include "iostream"
#include "Observer.h"

using namespace std;

class Chart : public Observer{
protected:
    void update() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_CHART_H
