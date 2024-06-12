//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_CANVAS_H
#define DESIGN_PATTERNS_EXAMPLES_CANVAS_H

#include <iostream>
#include "ToolType.h"
#include "Tool.h"

using namespace std;

class Canvas {
public:
 void mouseDown();
 void mouseUp();

private:
    Tool* currentTool;
public:
    Tool* getCurrentTool() const;
    void setCurrentTool(Tool* currentTool);
};


#endif //DESIGN_PATTERNS_EXAMPLES_CANVAS_H
