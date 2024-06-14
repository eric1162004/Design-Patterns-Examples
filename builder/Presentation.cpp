//
// Created by eric1 on 6/13/2024.
//

#include "Presentation.h"
#include "PDFDocument.h"

void Presentation::addSlide(Slide slide) {
    slides.push_back(slide);
}

void Presentation::exportPresentation(PresentationBuilder* builder) {
    for(auto slide: slides)
        builder->addSlide(slide);
}
