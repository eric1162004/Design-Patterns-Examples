//
// Created by eric1 on 6/12/2024.
//

#include <iostream>
#include "Compressor.h"

Compressor::Compressor(Handler *next) : Handler(next) {}

bool Compressor::doHandle(HttpRequest request) {
    std::cout << "compressed" << std::endl;
    return false;
}

