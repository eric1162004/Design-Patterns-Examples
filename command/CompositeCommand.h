//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_COMPOSITECOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_COMPOSITECOMMAND_H

#include <vector>
#include "UI_library/Command.h"

using namespace std;

class CompositeCommand : public Command {
public:
    void execute() override;
    void add(Command* command);

private:
    vector<Command*> commands;
};


#endif //DESIGN_PATTERNS_EXAMPLES_COMPOSITECOMMAND_H
