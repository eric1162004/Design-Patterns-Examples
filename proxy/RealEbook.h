//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_REALEBOOK_H
#define DESIGN_PATTERNS_EXAMPLES_REALEBOOK_H


#include <string>
#include "Ebook.h"

class RealEbook : public Ebook {
public:
    explicit RealEbook(const std::string &fileName);
    void show() override;
    const std::string &getFileName() const;

    virtual ~RealEbook();

private:
    std::string fileName;
    void load();
};


#endif //DESIGN_PATTERNS_EXAMPLES_REALEBOOK_H
