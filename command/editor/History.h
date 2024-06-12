//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HISTORY_H
#define DESIGN_PATTERNS_EXAMPLES_HISTORY_H

#include <vector>
#include "Command.h"
#include "UndoableCommand.h"

using namespace std;

namespace Editor {
class History {
public:
    void push(UndoableCommand* command);
    UndoableCommand* pop();
    int size();

private:
    vector<UndoableCommand*> commands;
};
}


#endif //DESIGN_PATTERNS_EXAMPLES_HISTORY_H
