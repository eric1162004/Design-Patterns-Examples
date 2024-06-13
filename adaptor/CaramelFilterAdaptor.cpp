//
// Created by eric1 on 6/13/2024.
//

#include "CaramelFilterAdaptor.h"

void CaramelFilterAdaptor::apply(Image image) {
    caramel.init();
    caramel.render(image);
}

CaramelFilterAdaptor::CaramelFilterAdaptor(const Caramel &caramel) : caramel(caramel) {}
