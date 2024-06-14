//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SHARPVIEWENGINE_H
#define DESIGN_PATTERNS_EXAMPLES_SHARPVIEWENGINE_H


#include "../matcha_framework/ViewEngine.h"

class SharpViewEngine : public ViewEngine {
public:
    std::string render(std::string viewName, std::map<std::string, Object> context) override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SHARPVIEWENGINE_H
