//
// Created by eric1 on 6/12/2024.
//

#include "UndoCommand.h"

UndoCommand::UndoCommand(Editor::History *history) : history(history) {}

void UndoCommand::execute() {
    if (history->size() > 0)
        history->pop()->unexecute();
}

