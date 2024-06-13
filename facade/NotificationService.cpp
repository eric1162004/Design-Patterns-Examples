//
// Created by eric1 on 6/13/2024.
//

#include "NotificationService.h"
#include "NotificationServer.h"

void NotificationService::send(std::string text, std::string target) {
    NotificationServer server;
    Connection connection = server.connect("ip");
    AuthToken authToken = server.authenticate("appID", "key");
    server.send(authToken, Message{text}, target);
    connection.disconnect();
}
