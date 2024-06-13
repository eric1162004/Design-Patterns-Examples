//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_GROUP_H
#define DESIGN_PATTERNS_EXAMPLES_GROUP_H


#include <vector>
#include "Shape.h"

class Group : public Component{
public:
    void add(Component* component);
    void render();

private:
    std::vector<Component*> components;
};


#endif //DESIGN_PATTERNS_EXAMPLES_GROUP_H
