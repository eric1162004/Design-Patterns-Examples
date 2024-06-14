//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_PRESENTATION_H
#define DESIGN_PATTERNS_EXAMPLES_PRESENTATION_H


#include <vector>
#include "Slide.h"
#include "PresentationBuilder.h"

enum class PresentationForm {
    PDF,
    IMAGE,
};

class Presentation {
public:
    void addSlide(Slide slide);
    void exportPresentation(PresentationBuilder* builder);

private:
    std::vector<Slide> slides;
};


#endif //DESIGN_PATTERNS_EXAMPLES_PRESENTATION_H
