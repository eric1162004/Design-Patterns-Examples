//
// Created by eric1 on 6/11/2024.
//

#include <iostream>
#include "Editor.h"
#include "History.h"

int main() {

    cout << "Testing memento";

    Editor editor;
    History history;

    editor.setContent("a");
    history.push(editor.createState());

    editor.setContent("b");
    history.push(editor.createState());

    editor.setContent("c");
    editor.restore(history.pop());
    editor.restore(history.pop());

    cout << editor.getContent() ;

    return 0;
}
