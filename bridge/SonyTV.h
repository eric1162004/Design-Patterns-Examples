//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_SONYTV_H
#define DESIGN_PATTERNS_EXAMPLES_SONYTV_H


#include "Device.h"

class SonyTV : public Device {
public:
    void turnOn() override;

    void turnOff() override;

    void setChannel(int number) override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_SONYTV_H
