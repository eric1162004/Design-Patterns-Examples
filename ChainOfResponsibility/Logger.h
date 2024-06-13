//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_LOGGER_H
#define DESIGN_PATTERNS_EXAMPLES_LOGGER_H


#include "HttpRequest.h"
#include "Handler.h"

class Logger : public Handler{
public:
    bool doHandle(HttpRequest request) override;

public:
    explicit Logger(Handler *next);

public:
    void log(HttpRequest request);
};


#endif //DESIGN_PATTERNS_EXAMPLES_LOGGER_H
