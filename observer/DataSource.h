//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_DATASOURCE_H
#define DESIGN_PATTERNS_EXAMPLES_DATASOURCE_H

#include "Subject.h"

class DataSource : public Subject {
public:
    int getValue() const;
    void setValue(int value);

private:
    int value;
};


#endif //DESIGN_PATTERNS_EXAMPLES_DATASOURCE_H
