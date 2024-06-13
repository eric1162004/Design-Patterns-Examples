//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_LISTBOX_H
#define DESIGN_PATTERNS_EXAMPLES_LISTBOX_H

#include <string>
#include "UIControl.h"

class ListBox : public UIControl
{
public:
    const std::string &getSelection() const;
    void setSelection(const std::string &selection);

private:
    std::string selection;
};

#endif // DESIGN_PATTERNS_EXAMPLES_LISTBOX_H
