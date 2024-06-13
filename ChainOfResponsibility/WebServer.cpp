//
// Created by eric1 on 6/12/2024.
//

#include "WebServer.h"
#include "Authenticator.h"

WebServer::WebServer(Handler *handler) : handler(handler) {}

void WebServer::handle(HttpRequest request) {
    handler->handle(request);
}

