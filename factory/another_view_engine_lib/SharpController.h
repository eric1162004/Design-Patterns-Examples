//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SHARPCONTROLLER_H
#define DESIGN_PATTERNS_EXAMPLES_SHARPCONTROLLER_H


#include "../matcha_framework/ViewEngine.h"

class SharpController : public Controller {
protected:
    ViewEngine *createViewEngine() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SHARPCONTROLLER_H
