//
// Created by eric1 on 6/12/2024.
//

#include "Subject.h"

void Subject::addObserver(Observer *observer) {
    observers.push_back(observer);
}

void Subject::removeObserver(Observer *observer) {
    // Find the index of the item to remove (assuming unique values)
    auto it = find(observers.begin(), observers.end(), observer);

    // Check if the item was found
    if (it != observers.end()){
        observers.erase(it);
    }
}

void Subject::notifyObservers() {
    for(auto observer : observers){
        observer->update();
    }
}
