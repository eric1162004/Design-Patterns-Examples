//
// Created by eric1 on 6/12/2024.
//

#include "Button.h"

Button::Button(DialogBox *dialogBox, bool isEnabled) : UIControl(dialogBox), isEnabled(isEnabled) {}

bool Button::getIsEnabled() const {
    return isEnabled;
}

void Button::setIsEnabled(bool isEnabled)
{
    Button::isEnabled = isEnabled;
    dialogBox->changed(this);
}

