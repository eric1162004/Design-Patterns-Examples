//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H
#define DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H

#include "ListBox.h"
#include "TextBox.h"
#include "Button.h"
#include "Observer.h"
#include <memory>
#include <iostream>

using namespace std;

class ArticlesDialogBox
{
public:
    ArticlesDialogBox();

    void articleSelected();
    void titleChanged();

    void simulateUserInteraction();

private:
    ListBox listBox{};
    TextBox textBox{};
    Button button{};

    class ListBoxObserver : public Observer {
    public:
        ListBoxObserver(ArticlesDialogBox* dialogBox) : dialogBox_(dialogBox) {}

        void update() override {
            dialogBox_->articleSelected();
        }
    private:
        ArticlesDialogBox* dialogBox_;
    };

    class TextBoxObserver : public Observer {
    public:
        TextBoxObserver(ArticlesDialogBox* dialogBox) : dialogBox_(dialogBox) {}

        void update() override {
            dialogBox_->titleChanged();
        }
    private:
        ArticlesDialogBox* dialogBox_;
    };

    class ButtonObserver : public Observer {
    public:
        ButtonObserver(ArticlesDialogBox* dialogBox) : dialogBox_(dialogBox) {}

        void update() override {
        }
    private:
        ArticlesDialogBox* dialogBox_;
    };

};

#endif // DESIGN_PATTERNS_EXAMPLES_ARTICLESDIALOGBOX_H
