//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_AUTHENTICATOR_H
#define DESIGN_PATTERNS_EXAMPLES_AUTHENTICATOR_H


#include "HttpRequest.h"
#include "Handler.h"

class Authenticator : public Handler {
public:
    explicit Authenticator(Handler *next);

    bool doHandle(HttpRequest request) override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_AUTHENTICATOR_H
