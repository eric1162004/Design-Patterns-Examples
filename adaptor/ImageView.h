//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_IMAGEVIEW_H
#define DESIGN_PATTERNS_EXAMPLES_IMAGEVIEW_H


#include "Image.h"
#include "Filter.h"

class ImageView {
private:
    Image image;

public:
    explicit ImageView(const Image &image);
    void apply(Filter& filter);
};


#endif //DESIGN_PATTERNS_EXAMPLES_IMAGEVIEW_H
