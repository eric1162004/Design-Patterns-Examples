//
// Created by eric1 on 6/11/2024.
//

#include "History.h"

void History::push(EditorState* state) {
    states.push_back(state);
}

EditorState* History::pop() {
    EditorState* lastState = states.back();
    states.pop_back();
    return lastState;
}
