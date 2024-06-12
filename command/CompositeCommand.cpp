//
// Created by eric1 on 6/12/2024.
//

#include "CompositeCommand.h"

void CompositeCommand::execute() {
    for(auto command : commands){
        command->execute();
    }
}

void CompositeCommand::add(Command* command) {
    commands.push_back(command);
}
