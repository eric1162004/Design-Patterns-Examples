//
// Created by eric1 on 6/13/2024.
//

#include <iostream>
#include "RealEbook.h"

RealEbook::RealEbook(const std::string &fileName) : fileName(fileName) {
    load();
}

void RealEbook::load() {
    std::cout << "Loading the ebook..." << std::endl;
}

void RealEbook::show() {
    std::cout << "Showing the ebook " << fileName << std::endl;
}

const std::string &RealEbook::getFileName() const {
    return fileName;
}

RealEbook::~RealEbook() {
    std::cout << "Destructing the RealEbook..." << std::endl;
}


