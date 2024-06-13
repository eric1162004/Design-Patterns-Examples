//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_UICONTROL_H
#define DESIGN_PATTERNS_EXAMPLES_UICONTROL_H

#include "DialogBox.h"

class DialogBox;

class UIControl
{
public:
    explicit UIControl(DialogBox *dialogBox);

protected:
    DialogBox *owner;
};

#endif // DESIGN_PATTERNS_EXAMPLES_UICONTROL_H
