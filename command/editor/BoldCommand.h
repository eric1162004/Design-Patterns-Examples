//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BOLDCOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_BOLDCOMMAND_H

#include "UndoableCommand.h"
#include "HtmlDocument.h"
#include "History.h"
#include <iostream>

using namespace std;
using namespace Editor;

class BoldCommand : public UndoableCommand{
public:
    void execute() override;
    void unexecute() override;

private:
    string preContent;
    HtmlDocument* htmlDocument;
    History* history;
public:
    BoldCommand(HtmlDocument *htmlDocument, History *history);
};


#endif //DESIGN_PATTERNS_EXAMPLES_BOLDCOMMAND_H
