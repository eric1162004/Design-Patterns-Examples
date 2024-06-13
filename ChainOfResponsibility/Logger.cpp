//
// Created by eric1 on 6/12/2024.
//

#include <iostream>
#include "Logger.h"

Logger::Logger(Handler *next) : Handler(next) {}

bool Logger::doHandle(HttpRequest request) {
    std::cout << "Logged" << std::endl;
    return false;
}

