//
// Created by eric1 on 6/13/2024.
//

#include <iostream>
#include "Library.h"
#include "Ebook.h"


void Library::add(Ebook* ebook) {
    ebooks.insert({ebook->getFileName(), ebook});
}

void Library::openEbook(std::string filename) {
    // ... check if the ebook exists, then
    ebooks.at(filename)->show();
}

Library::~Library() {
    for (auto it = ebooks.begin(); it != ebooks.end(); ++it) {
        delete (EbookProxy*) it->second;
    }
    std::cout << "destructing lib" << std::endl;
}
