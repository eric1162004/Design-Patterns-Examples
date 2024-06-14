//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_PDFDOCUMENTBUILDER_H
#define DESIGN_PATTERNS_EXAMPLES_PDFDOCUMENTBUILDER_H


#include "PresentationBuilder.h"
#include "PDFDocument.h"

class PDFDocumentBuilder: public PresentationBuilder {
public:
    void addSlide(Slide slide) override;

    PDFDocument getPDFDocument();

private:
    PDFDocument document;
};


#endif //DESIGN_PATTERNS_EXAMPLES_PDFDOCUMENTBUILDER_H
