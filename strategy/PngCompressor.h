//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_PNGCOMPRESSOR_H
#define DESIGN_PATTERNS_EXAMPLES_PNGCOMPRESSOR_H

#include "Compressor.h"
#include <iostream>

class PngCompressor : public Compressor {
public:
void compress(string filename) override;
};



#endif //DESIGN_PATTERNS_EXAMPLES_PNGCOMPRESSOR_H
