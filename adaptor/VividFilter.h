//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_VIVIDFILTER_H
#define DESIGN_PATTERNS_EXAMPLES_VIVIDFILTER_H


#include "Filter.h"

class VividFilter: public Filter {
public:
    void apply(Image image) override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_VIVIDFILTER_H
