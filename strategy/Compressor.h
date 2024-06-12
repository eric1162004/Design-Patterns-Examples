//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H
#define DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H

#include <string>
using namespace std;

class Compressor {
public:
    virtual void compress(string filename) = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H
