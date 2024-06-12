//
// Created by eric1 on 6/11/2024.
//

#include "EditorState.h"

EditorState::EditorState(const string &content) : content(content) {
}

const string &EditorState::getContent() const {
    return content;
}
