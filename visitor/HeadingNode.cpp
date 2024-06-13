//
// Created by eric1 on 6/13/2024.
//

#include "HtmlNode.h"

void HeadingNode::execute(Operation &operation) {
    operation.apply(this);
}
