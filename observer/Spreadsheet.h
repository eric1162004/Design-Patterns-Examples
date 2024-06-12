//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SPREADSHEET_H
#define DESIGN_PATTERNS_EXAMPLES_SPREADSHEET_H

#include "Observer.h"
#include "iostream"

using namespace std;

class Spreadsheet : public Observer{
protected:
    void update() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SPREADSHEET_H
