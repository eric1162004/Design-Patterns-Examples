//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_REMOTECONTROL_H
#define DESIGN_PATTERNS_EXAMPLES_REMOTECONTROL_H


#include "Device.h"

class RemoteControl {
public:
    explicit RemoteControl(Device &device);
    void turnOn();
    void turnOff();

protected:
    Device& device;
};


#endif //DESIGN_PATTERNS_EXAMPLES_REMOTECONTROL_H
