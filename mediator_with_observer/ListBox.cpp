//
// Created by eric1 on 6/12/2024.
//

#include "ListBox.h"

const std::string &ListBox::getSelection() const
{
    return selection;
}

void ListBox::setSelection(const std::string &selection)
{
    ListBox::selection = selection;
    notifyObservers();
}
