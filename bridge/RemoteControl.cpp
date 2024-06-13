//
// Created by eric1 on 6/13/2024.
//

#include "RemoteControl.h"

RemoteControl::RemoteControl(Device &device) : device(device) {}

void RemoteControl::turnOn() {
    device.turnOn();
}

void RemoteControl::turnOff() {
    device.turnOff();
}

