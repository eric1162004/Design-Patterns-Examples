//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_FILTER_H
#define DESIGN_PATTERNS_EXAMPLES_FILTER_H


#include "Image.h"

class Filter {
public:
    virtual void apply (Image image) = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_FILTER_H
