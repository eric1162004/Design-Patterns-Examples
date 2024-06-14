//
// Created by eric1 on 6/13/2024.
//

#include <iostream>
#include "EbookProxy.h"

EbookProxy::EbookProxy(const std::string &filename) : filename(filename) {}

EbookProxy::~EbookProxy() {
    std::cout << "EbookProxy " << filename << " deleted" << std::endl;
    delete ebook;
}

void EbookProxy::show() {
    if (ebook == nullptr)
        ebook = new RealEbook {filename};
    ebook->show();
}

const std::string &EbookProxy::getFileName() const {
    return filename;
}

