#include <iostream>
using namespace std;

#include "CustomerService.h"
#include "AddCustomerCommand.h"
#include "UI_library/Button.h"

#include "CompositeCommand.h"
#include "BlackAndWhiteCommand.h"
#include "ResizeCommand.h"

#include "editor/History.h"
#include "editor/HtmlDocument.h"
#include "editor/BoldCommand.h"
#include "editor/UndoCommand.h"

int main() {

    // Command implementation example 1
    CustomerService customerService;
    AddCustomerCommand addCustomerCommand{customerService};
    Button button{&addCustomerCommand};
    button.click();

    // Composite Command
    // - group multiple related commands under a single composite command
    CompositeCommand compositeCommand;
    BlackAndWhiteCommand blackAndWhiteCommand;
    ResizeCommand resizeCommand;
    compositeCommand.add(&resizeCommand);
    compositeCommand.add(&blackAndWhiteCommand);
    compositeCommand.execute();

    // Implementing undo mechanism
    History history;
    HtmlDocument htmlDocument;
    htmlDocument.setContent("Hello World");

    BoldCommand boldCommand(&htmlDocument, &history);
    boldCommand.execute();
    cout << htmlDocument.getContent() << endl;
    UndoCommand undoCommand(&history);
    undoCommand.execute();
    cout << htmlDocument.getContent() << endl;

    return 0;
}
