//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_UICONTROL_H
#define DESIGN_PATTERNS_EXAMPLES_UICONTROL_H

#include "Observer.h"
#include <vector>
#include <iostream>

using namespace std;

class UIControl
{
public:
    void addEventHandler(Observer* observer);

    virtual ~UIControl();

private:
    vector<Observer*> eventHandlers;

protected:
    void notifyObservers();
};

#endif // DESIGN_PATTERNS_EXAMPLES_UICONTROL_H
