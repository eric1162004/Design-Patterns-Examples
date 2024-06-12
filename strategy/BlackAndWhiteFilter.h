//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BLACKANDWHITEFILTER_H
#define DESIGN_PATTERNS_EXAMPLES_BLACKANDWHITEFILTER_H

#include "Filter.h"
#include <iostream>

class BlackAndWhiteFilter : public Filter {
public:
    void apply() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_BLACKANDWHITEFILTER_H
