//
// Created by eric1 on 6/12/2024.
//

#include "Button.h"

Button::Button(Command *command) : command(command) {}

const std::string &Button::getLabel() const {
    return label;
}

void Button::setLabel(const std::string &label) {
    Button::label = label;
}

void Button::click() {
    command->execute();
}

