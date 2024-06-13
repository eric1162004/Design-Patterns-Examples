//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HANDLER_H
#define DESIGN_PATTERNS_EXAMPLES_HANDLER_H

#include "HttpRequest.h"

class Handler {
public:
    explicit Handler(Handler *next);

    void handle(HttpRequest request);
    virtual bool doHandle(HttpRequest request) = 0;

private:
    Handler* next;
};


#endif //DESIGN_PATTERNS_EXAMPLES_HANDLER_H
