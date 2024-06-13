//
// Created by eric1 on 6/13/2024.
//

#include "ImageView.h"

ImageView::ImageView(const Image &image) : image(image) {}

void ImageView::apply(Filter& filter) {
    filter.apply(image);
}
