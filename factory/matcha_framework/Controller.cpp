//
// Created by eric1 on 6/13/2024.
//

#include <iostream>
#include "ViewEngine.h"

void Controller::render(std::string viewName, std::map<std::string, Object> context) {
    ViewEngine* engine = createViewEngine();

    std::string html = engine->render(viewName, context);
    std::cout << html << std::endl;
}

ViewEngine* Controller::createViewEngine() {
    return new MatchViewEngine();
}
