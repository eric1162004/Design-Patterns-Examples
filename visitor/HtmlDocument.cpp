//
// Created by eric1 on 6/13/2024.
//

#include "HtmlDocument.h"

void HtmlDocument::add(HtmlNode *node) {
    nodes.push_back(node);
}

HtmlDocument::~HtmlDocument() {
    for(auto node: nodes)
        delete node;
}

void HtmlDocument::execute(Operation& operation) {
    for(auto node: nodes)
        node->execute(operation);
}
