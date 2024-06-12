//
// Created by eric1 on 6/11/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HISTORY_H
#define DESIGN_PATTERNS_EXAMPLES_HISTORY_H

#include "EditorState.h"
#include <vector>

class History {
public:
    void push(EditorState* state);

    [[maybe_unused]] EditorState* pop();
private:
    vector<EditorState*> states;
};


#endif //DESIGN_PATTERNS_EXAMPLES_HISTORY_H
