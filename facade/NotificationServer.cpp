//
// Created by eric1 on 6/13/2024.
//

#include <iostream>
#include "NotificationServer.h"

Connection NotificationServer::connect(std::string ipAddress) {
    return Connection();
}

AuthToken NotificationServer::authenticate(std::string appID, std::string key) {
    return AuthToken();
}

void NotificationServer::send(AuthToken authToken, Message message, std::string target) {
    std::cout << "Sending a message" << std::endl;
}
