//
// Created by eric1 on 6/11/2024.
//

#include "Editor.h"

// Editor create a snapshot of the current state
// the current state will be returned to the caller
// and to be saved somewhere
EditorState* Editor::createState() {
    return new EditorState(this->content);
}

void Editor::restore(EditorState* state) {
    this->content = state->getContent();
    delete state;
}

const string &Editor::getContent() const {
    return content;
}

void Editor::setContent(const string &content) {
    Editor::content = content;
}


