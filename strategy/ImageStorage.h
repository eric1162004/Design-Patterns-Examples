//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_IMAGESTORAGE_H
#define DESIGN_PATTERNS_EXAMPLES_IMAGESTORAGE_H

#include <string>
#include "Compressor.h"
#include "Filter.h"

using namespace std;

class ImageStorage {
public:
    ImageStorage( Compressor& compressor,  Filter& filter);
    void store(string& imageUrl);

private:
    Compressor& compressor;
    Filter& filter;
};


#endif //DESIGN_PATTERNS_EXAMPLES_IMAGESTORAGE_H
