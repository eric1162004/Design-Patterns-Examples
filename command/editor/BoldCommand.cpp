//
// Created by eric1 on 6/12/2024.
//

#include "BoldCommand.h"

BoldCommand::BoldCommand(HtmlDocument *htmlDocument, History *history) : htmlDocument(htmlDocument), history(history) {}

void BoldCommand::execute() {
    preContent = htmlDocument->getContent();
    htmlDocument->makeBold();
    history->push(this);
}

void BoldCommand::unexecute() {
    htmlDocument->setContent(preContent);
}

