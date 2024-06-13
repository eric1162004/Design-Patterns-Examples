//
// Created by eric1 on 6/13/2024.
//

#include "Group.h"

void Group::add(Component* component) {
    components.push_back(component);
}

void Group::render() {
    for(auto component : components)
        component->render();
}

