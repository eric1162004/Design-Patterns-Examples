//
// Created by eric1 on 6/11/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_EDITORSTATE_H
#define DESIGN_PATTERNS_EXAMPLES_EDITORSTATE_H

#include <iostream>

using namespace std;

class EditorState {
public:
    explicit EditorState(const string &content);
    const string &getContent() const;

private:
    const string content;
};


#endif //DESIGN_PATTERNS_EXAMPLES_EDITORSTATE_H
