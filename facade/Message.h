//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_MESSAGE_H
#define DESIGN_PATTERNS_EXAMPLES_MESSAGE_H


#include <string>

class Message {
private:
    std::string content;
public:
    explicit Message(const std::string &content);
};


#endif //DESIGN_PATTERNS_EXAMPLES_MESSAGE_H
