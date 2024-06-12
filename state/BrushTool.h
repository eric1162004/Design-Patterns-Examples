//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BRUSHTOOL_H
#define DESIGN_PATTERNS_EXAMPLES_BRUSHTOOL_H

#include "Tool.h"
#include <iostream>

using namespace std;

class BrushTool : public Tool{
public:
    void mouseDown() override;

    void mouseUp() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_BRUSHTOOL_H
