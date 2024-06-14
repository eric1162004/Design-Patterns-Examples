//
// Created by eric1 on 6/13/2024.
//

#include "PDFDocumentBuilder.h"

void PDFDocumentBuilder::addSlide(Slide slide) {
    document.addPage(slide.getText());
}

PDFDocument PDFDocumentBuilder::getPDFDocument() {
    return document;
}
