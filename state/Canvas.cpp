//
// Created by eric1 on 6/12/2024.
//

#include "Canvas.h"

Tool* Canvas::getCurrentTool() const {
    return currentTool;
}

void Canvas::setCurrentTool(Tool* currentTool) {
    Canvas::currentTool = currentTool;
}

void Canvas::mouseDown() {
    currentTool->mouseDown();
}

void Canvas::mouseUp() {
    currentTool->mouseUp();
}
