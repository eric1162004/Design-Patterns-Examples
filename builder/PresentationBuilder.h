//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_PRESENTATIONBUILDER_H
#define DESIGN_PATTERNS_EXAMPLES_PRESENTATIONBUILDER_H


#include "Slide.h"

class PresentationBuilder {
public:
    virtual void addSlide(Slide slide) = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_PRESENTATIONBUILDER_H
