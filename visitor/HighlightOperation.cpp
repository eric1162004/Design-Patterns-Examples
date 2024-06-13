//
// Created by eric1 on 6/13/2024.
//

#include "HtmlNode.h"

void HighlightOperation::apply(HeadingNode* headingNode) {
    std::cout << "highlighting heading" << std::endl;
}

void HighlightOperation::apply(AnchorNode* anchorNode) {
    std::cout << "highlighting anchor node" << std::endl;
}
