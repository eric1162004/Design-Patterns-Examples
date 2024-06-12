//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_UNDOABLECOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_UNDOABLECOMMAND_H

#include "Command.h"

class UndoableCommand : public Command {
public:
    virtual void unexecute() = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_UNDOABLECOMMAND_H
