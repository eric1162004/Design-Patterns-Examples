//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_WEBSERVER_H
#define DESIGN_PATTERNS_EXAMPLES_WEBSERVER_H


#include "HttpRequest.h"
#include "Handler.h"

class WebServer {
public:
    void handle(HttpRequest request);
private:
    Handler* handler;
public:
    explicit WebServer(Handler *handler);
};


#endif //DESIGN_PATTERNS_EXAMPLES_WEBSERVER_H
