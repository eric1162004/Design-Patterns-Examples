//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_EBOOKPROXY_H
#define DESIGN_PATTERNS_EXAMPLES_EBOOKPROXY_H


#include "Ebook.h"
#include "RealEbook.h"

class EbookProxy : public Ebook
{
public:
    explicit EbookProxy(const std::string &filename);
    virtual ~EbookProxy();

    void show() override;
    const std::string &getFileName() const override;

private:
    std::string filename;
    RealEbook* ebook {};
};


#endif //DESIGN_PATTERNS_EXAMPLES_EBOOKPROXY_H
