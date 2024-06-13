//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_TEXTBOX_H
#define DESIGN_PATTERNS_EXAMPLES_TEXTBOX_H

#include <string>
#include "UIControl.h"

class TextBox : public UIControl
{
public:
    TextBox(DialogBox *dialogBox, const std::string &content);

    const std::string &getContent() const;
    void setContent(const std::string &content);

private:
    std::string content;
};

#endif // DESIGN_PATTERNS_EXAMPLES_TEXTBOX_H
