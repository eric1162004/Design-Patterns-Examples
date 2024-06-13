//
// Created by eric1 on 6/12/2024.
//

#include "UIControl.h"

void UIControl::addEventHandler(Observer* observer) {
    eventHandlers.push_back(observer);
}

void UIControl::notifyObservers() {
    for (auto observer: eventHandlers){
        observer->update();
    }
}

UIControl::~UIControl() {
    for (auto observer: eventHandlers){
        delete observer;
    }
}
