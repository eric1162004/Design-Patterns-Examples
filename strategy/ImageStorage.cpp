//
// Created by eric1 on 6/12/2024.
//
#include "ImageStorage.h"

ImageStorage::ImageStorage( Compressor& compressor, Filter& filter) : compressor(compressor), filter(filter) {}

void ImageStorage::store(string& imageUrl) {
    this->compressor.compress(imageUrl);
    this->filter.apply();
}
