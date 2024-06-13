//
// Created by eric1 on 6/12/2024.
//

#include <iostream>
#include "ArticlesDialogBox.h"

void ArticlesDialogBox::changed(UIControl* control) {
    if(control == &listBox)
        articleSelected();
    else if (control == &textBox)
        titleChanged();
}

void ArticlesDialogBox::articleSelected() {
    textBox.setContent(listBox.getSelection());
    button.setIsEnabled(true);
}

void ArticlesDialogBox::titleChanged() {
    bool isEmpty = textBox.getContent().empty();
    button.setIsEnabled(!isEmpty);
}

void ArticlesDialogBox::simulateUserInteraction() {
    listBox.setSelection("Article 1");
    textBox.setContent("");

    std::cout << "TextBox: " + textBox.getContent() << std::endl;
    if(button.getIsEnabled())
        std::cout << "Button is enabled." << std::endl;
    else
        std::cout << "Button is disabled." << std::endl;
}
