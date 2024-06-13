//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H
#define DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H


#include "HttpRequest.h"
#include "Handler.h"

class Compressor: public Handler {
public:
    explicit Compressor(Handler *next);
    bool doHandle(HttpRequest request) override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_COMPRESSOR_H
