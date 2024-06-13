//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H
#define DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H

#include <vector>
#include "HtmlNode.h"

class HtmlDocument {
public:
    virtual ~HtmlDocument();
    void add(HtmlNode* node);
    void execute(Operation& operation);
private:
    std::vector<HtmlNode*> nodes;
};


#endif //DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H
