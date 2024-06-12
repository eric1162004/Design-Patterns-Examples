//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H
#define DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H

#include <iostream>
using namespace std;

class HtmlDocument {
public:
    const string &getContent() const;
    void setContent(const string &content);

    void makeBold();

private:
    string content;
};


#endif //DESIGN_PATTERNS_EXAMPLES_HTMLDOCUMENT_H
