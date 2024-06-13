//
// Created by eric1 on 6/12/2024.
//

#include <iostream>
#include "Authenticator.h"

Authenticator::Authenticator(Handler *next) : Handler(next) {}

bool Authenticator::doHandle(HttpRequest request) {
    bool isValid = (request.getUsername() == "admin" && request.getPassword() == "1234");
    std::cout << "authenticated" << std::endl;
    return !isValid; // if the user is valid, the process is Not done, pass to the next handle
}

