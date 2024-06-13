//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ADVANCEDREMOTECONTROL_H
#define DESIGN_PATTERNS_EXAMPLES_ADVANCEDREMOTECONTROL_H


#include "RemoteControl.h"

class AdvancedRemoteControl: public RemoteControl {
public:
    AdvancedRemoteControl(Device &device);
    void setChannel(int number);
};


#endif //DESIGN_PATTERNS_EXAMPLES_ADVANCEDREMOTECONTROL_H
