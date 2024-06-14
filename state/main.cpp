#include <iostream>
#include "Canvas.h"
#include "SelectionTool.h"
#include "BrushTool.h"

int main() {

    Canvas canvas;
    SelectionTool selectionTool;
    BrushTool brushTool;

    canvas.setCurrentTool(&selectionTool);
    canvas.mouseUp();
    canvas.mouseDown();

    canvas.setCurrentTool(&brushTool);
    canvas.mouseUp();
    canvas.mouseDown();

    return 0;
}
