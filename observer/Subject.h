//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SUBJECT_H
#define DESIGN_PATTERNS_EXAMPLES_SUBJECT_H

#include "Observer.h"
#include "vector"
#include <algorithm>

using namespace std;

// Observable
class Subject {
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers();
private:
    vector<Observer*> observers;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SUBJECT_H
