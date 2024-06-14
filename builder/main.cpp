

#include "Presentation.h"
#include "PDFDocumentBuilder.h"

int main() {

    Presentation presentation;
    Slide slide1{"slide1"};
    Slide slide2{"slide2"};

    presentation.addSlide(slide1);
    presentation.addSlide(slide2);

    PDFDocumentBuilder* builder = new PDFDocumentBuilder();
    presentation.exportPresentation(builder);
    PDFDocument pdf = builder->getPDFDocument();



    return 0;
}
