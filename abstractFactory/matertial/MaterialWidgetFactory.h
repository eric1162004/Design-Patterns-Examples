//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_MATERIALWIDGETFACTORY_H
#define DESIGN_PATTERNS_EXAMPLES_MATERIALWIDGETFACTORY_H


#include "../WidgetFactory.h"

class MaterialWidgetFactory : public WidgetFactory {
public:
    Button* createButton() override;
    TextBox* createTextBox() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_MATERIALWIDGETFACTORY_H
