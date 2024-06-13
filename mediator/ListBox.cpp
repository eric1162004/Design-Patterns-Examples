//
// Created by eric1 on 6/12/2024.
//

#include "ListBox.h"

ListBox::ListBox(DialogBox *dialogBox) : UIControl(dialogBox) {}

const std::string &ListBox::getSelection() const
{
    return selection;
}

void ListBox::setSelection(const std::string &selection)
{
    ListBox::selection = selection;
    dialogBox->changed(this);
}
