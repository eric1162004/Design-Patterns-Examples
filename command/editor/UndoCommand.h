//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_UNDOCOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_UNDOCOMMAND_H

#include "Command.h"
#include "History.h"

class UndoCommand : public Command {
public:
    void execute();
private:
    Editor::History* history;
public:
    explicit UndoCommand(Editor::History *history);
};


#endif //DESIGN_PATTERNS_EXAMPLES_UNDOCOMMAND_H
