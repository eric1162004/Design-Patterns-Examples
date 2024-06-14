//
// Created by eric1 on 6/13/2024.
//

#include "ContactForm.h"
#include "../matertial/MaterialButton.h"
#include "../matertial/MaterialTextBox.h"

void ContactForm::render(WidgetFactory* factory) {
    factory->createButton()->render();
    factory->createTextBox()->render();
}
