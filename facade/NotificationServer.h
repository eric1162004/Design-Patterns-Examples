//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_NOTIFICATIONSERVER_H
#define DESIGN_PATTERNS_EXAMPLES_NOTIFICATIONSERVER_H


#include <string>
#include "Connection.h"
#include "AuthToken.h"
#include "Message.h"

class NotificationServer {
// connect() -> Connection
// authenticate(appID, key) -> AuthToken
// send(authToken, message, target)
// conn.disconnected()

public:
    Connection connect(std::string ipAddress);
    AuthToken authenticate(std::string appID, std::string key);
    void send(AuthToken authToken, Message message, std::string target);
};


#endif //DESIGN_PATTERNS_EXAMPLES_NOTIFICATIONSERVER_H
