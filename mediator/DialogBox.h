//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_DIALOGBOX_H
#define DESIGN_PATTERNS_EXAMPLES_DIALOGBOX_H

#include "UIControl.h"

class UIControl;

class DialogBox
{
public:
    virtual void changed(UIControl *control) = 0;
};

#endif // DESIGN_PATTERNS_EXAMPLES_DIALOGBOX_H
