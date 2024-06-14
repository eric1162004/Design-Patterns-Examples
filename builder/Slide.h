//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SLIDE_H
#define DESIGN_PATTERNS_EXAMPLES_SLIDE_H


#include <string>

class Slide {
public:
    const std::string &getText() const;
    explicit Slide(const std::string &text);

private:
    std::string text;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SLIDE_H
