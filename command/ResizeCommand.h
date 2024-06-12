//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_RESIZECOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_RESIZECOMMAND_H

#include "UI_library/Command.h"
#include <iostream>

class ResizeCommand : public Command {
public:
    void execute() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_RESIZECOMMAND_H
