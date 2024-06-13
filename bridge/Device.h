//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_DEVICE_H
#define DESIGN_PATTERNS_EXAMPLES_DEVICE_H


class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void setChannel(int number) = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_DEVICE_H
