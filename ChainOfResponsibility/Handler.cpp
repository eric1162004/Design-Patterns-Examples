//
// Created by eric1 on 6/12/2024.
//

#include "Handler.h"

Handler::Handler(Handler *next) : next(next) {}

void Handler::handle(HttpRequest request) {
    if (doHandle(request)) return;

    if(next != nullptr)
        next->handle(request);
}
