//
// Created by eric1 on 6/13/2024.
//

#include "MaterialWidgetFactory.h"
#include "MaterialButton.h"
#include "MaterialTextBox.h"

Button* MaterialWidgetFactory::createButton() {
    return new MaterialButton();
}

TextBox* MaterialWidgetFactory::createTextBox() {
    return new MaterialTextBox();
}
