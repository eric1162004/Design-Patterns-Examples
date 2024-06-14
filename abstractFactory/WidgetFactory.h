//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_WIDGETFACTORY_H
#define DESIGN_PATTERNS_EXAMPLES_WIDGETFACTORY_H


#include "Button.h"
#include "TextBox.h"

class WidgetFactory {
public:
    virtual Button* createButton() = 0;
    virtual TextBox* createTextBox() = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_WIDGETFACTORY_H
