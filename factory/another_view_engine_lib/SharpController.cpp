//
// Created by eric1 on 6/13/2024.
//

#include "SharpController.h"
#include "SharpViewEngine.h"

ViewEngine *SharpController::createViewEngine() {
    return new SharpViewEngine();
}
