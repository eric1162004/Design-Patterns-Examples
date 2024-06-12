//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BUTTON_H
#define DESIGN_PATTERNS_EXAMPLES_BUTTON_H

#include <iostream>
#include "Command.h"

class Button {
public:
    explicit Button(Command* command);

    const std::string &getLabel() const;
    void setLabel(const std::string &label);

    void click();

private:
    std::string label;
    Command* command;
};


#endif //DESIGN_PATTERNS_EXAMPLES_BUTTON_H
