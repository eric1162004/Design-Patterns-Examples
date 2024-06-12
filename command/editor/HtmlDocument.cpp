//
// Created by eric1 on 6/12/2024.
//

#include "HtmlDocument.h"

const string &HtmlDocument::getContent() const {
    return content;
}

void HtmlDocument::setContent(const string &content) {
    HtmlDocument::content = content;
}

void HtmlDocument::makeBold() {
    setContent("<b>" + content + "</b>");
}
