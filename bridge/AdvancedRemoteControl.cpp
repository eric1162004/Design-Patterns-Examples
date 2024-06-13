//
// Created by eric1 on 6/13/2024.
//

#include "AdvancedRemoteControl.h"

AdvancedRemoteControl::AdvancedRemoteControl(Device &device) : RemoteControl(device) {}

void AdvancedRemoteControl::setChannel(int number) {
    device.setChannel(number);
}

