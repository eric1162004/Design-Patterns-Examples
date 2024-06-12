//
// Created by eric1 on 6/11/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_EDITOR_H
#define DESIGN_PATTERNS_EXAMPLES_EDITOR_H

#include <iostream>
#include "EditorState.h"

using namespace std;

class Editor {
public:
    const string &getContent() const;
    void setContent(const string &content);

    EditorState* createState();
    void restore(EditorState* state);

private:
    string content;
};


#endif //DESIGN_PATTERNS_EXAMPLES_EDITOR_H
