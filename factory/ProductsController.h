//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_PRODUCTSCONTROLLER_H
#define DESIGN_PATTERNS_EXAMPLES_PRODUCTSCONTROLLER_H


#include "matcha_framework/ViewEngine.h"
#include "another_view_engine_lib/SharpController.h"

class ProductsController : public SharpController {
public:
    void listProducts();
};


#endif //DESIGN_PATTERNS_EXAMPLES_PRODUCTSCONTROLLER_H
