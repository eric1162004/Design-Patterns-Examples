//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_VIEWENGINE_H
#define DESIGN_PATTERNS_EXAMPLES_VIEWENGINE_H

#include <map>
#include <string>

struct Object {};

class ViewEngine {
public:
    virtual std::string render(std::string viewName, std::map<std::string, Object> context) = 0;
};

class MatchViewEngine : public ViewEngine {
public:
    std::string render(std::string viewName, std::map<std::string, Object> context);
};

class Controller {
public:
    void render(std::string viewName, std::map<std::string, Object> context);

protected:
    virtual ViewEngine* createViewEngine();
};

#endif //DESIGN_PATTERNS_EXAMPLES_VIEWENGINE_H
