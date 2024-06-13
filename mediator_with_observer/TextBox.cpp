//
// Created by eric1 on 6/12/2024.
//

#include "TextBox.h"

const std::string &TextBox::getContent() const
{
    return content;
}

void TextBox::setContent(const std::string &content)
{
    TextBox::content = content;
    notifyObservers();
}
