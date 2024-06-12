//
// Created by eric1 on 6/12/2024.
//

#include "History.h"

void Editor::History::push(UndoableCommand* command) {
    commands.push_back(command);
}

UndoableCommand* Editor::History::pop() {
    UndoableCommand* temp = commands.back();
    commands.pop_back();
    return temp;
}

int Editor::History::size() {
    return commands.size();
}
