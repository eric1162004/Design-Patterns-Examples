//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_LIBRARY_H
#define DESIGN_PATTERNS_EXAMPLES_LIBRARY_H


#include <map>
#include <memory>
#include "RealEbook.h"
#include "EbookProxy.h"

class Library {
public:
    virtual ~Library();

    void add(Ebook* ebook);
    void openEbook(std::string filename);

private:
    std::map<std::string, Ebook*> ebooks;
};


#endif //DESIGN_PATTERNS_EXAMPLES_LIBRARY_H
