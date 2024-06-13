//
// Created by eric1 on 6/12/2024.
//

#include "HttpRequest.h"

HttpRequest::HttpRequest(const std::string &username, const std::string &password) : username(username),
                                                                                     password(password) {}

const std::string &HttpRequest::getPassword() const {
    return password;
}

const std::string &HttpRequest::getUsername() const {
    return username;
}
