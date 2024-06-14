//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_EBOOK_H
#define DESIGN_PATTERNS_EXAMPLES_EBOOK_H


#include <string>
#include <memory>

class Ebook {
public:
    virtual void show() = 0;
    virtual const std::string &getFileName() const = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_EBOOK_H
