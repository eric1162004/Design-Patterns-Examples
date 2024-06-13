//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H
#define DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H

#include "DialogBox.h"
#include "ListBox.h"
#include "TextBox.h"
#include "Button.h"

class ArticlesDialogBox : public DialogBox
{
public:
    void changed(UIControl *control) override;
    void articleSelected();
    void titleChanged();

    void simulateUserInteraction();

private:
    ListBox listBox{this};
    TextBox textBox{this, ""};
    Button button{this, false};
};

#endif // DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H
