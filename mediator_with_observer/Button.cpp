//
// Created by eric1 on 6/12/2024.
//

#include "Button.h"

bool Button::getIsEnabled() const {
    return isEnabled;
}

void Button::setIsEnabled(bool isEnabled)
{
    Button::isEnabled = isEnabled;
    notifyObservers();
}

