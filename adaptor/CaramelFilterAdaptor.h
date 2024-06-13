//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_CARAMELFILTERADAPTOR_H
#define DESIGN_PATTERNS_EXAMPLES_CARAMELFILTERADAPTOR_H


#include "Filter.h"
#include "FilterLib/Caramel.h"

class CaramelFilterAdaptor : public Filter {
public:
    explicit CaramelFilterAdaptor(const Caramel& caramel);
    void apply(Image image) override;

private:
    Caramel caramel;
};


#endif //DESIGN_PATTERNS_EXAMPLES_CARAMELFILTERADAPTOR_H
