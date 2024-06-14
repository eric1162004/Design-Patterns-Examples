//
// Created by eric1 on 6/13/2024.
//

#include "ProductsController.h"

void ProductsController::listProducts() {
    // get products from a db...
    std::map<std::string, Object> context;
    // context.insert(products)
    render("products.html", context);
}
