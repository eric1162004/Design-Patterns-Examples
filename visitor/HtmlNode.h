//
// Created by eric1 on 6/13/2024.
//

#include <iostream>

#ifndef DESIGN_PATTERNS_EXAMPLES_HTMLNODE_H
#define DESIGN_PATTERNS_EXAMPLES_HTMLNODE_H

class Operation;

class HtmlNode {
public:
    virtual void execute(Operation& operation) = 0;
};

class HeadingNode: public HtmlNode {
public:
    void execute(Operation &operation) override;
};

class AnchorNode : public HtmlNode {
public:
    void execute(Operation& operation) override;
};

class Operation {
public:
    virtual void apply(HeadingNode* headingNode) = 0;
    virtual void apply(AnchorNode* anchorNode) = 0;
};

class HighlightOperation : public Operation {
public:
    void apply(HeadingNode* headingNode) override;
    void apply(AnchorNode* anchorNode) override;
};

#endif //DESIGN_PATTERNS_EXAMPLES_HTMLNODE_H
