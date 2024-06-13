//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BUTTON_H
#define DESIGN_PATTERNS_EXAMPLES_BUTTON_H

#include "UIControl.h"

class Button : public UIControl
{
public:
    Button(DialogBox *dialogBox, bool isEnabled);

    void setIsEnabled(bool isEnabled);
    bool getIsEnabled() const;

private:
    bool isEnabled;
};

#endif // DESIGN_PATTERNS_EXAMPLES_BUTTON_H
