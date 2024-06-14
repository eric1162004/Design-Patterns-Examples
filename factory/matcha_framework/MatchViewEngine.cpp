//
// Created by eric1 on 6/13/2024.
//

#include "ViewEngine.h"

std::string MatchViewEngine::render(std::string viewName, std::map<std::string, Object> context) {
    return std::string{"View rendered by Matcha."};
}
