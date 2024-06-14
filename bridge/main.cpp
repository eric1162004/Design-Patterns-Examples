

#include "RemoteControl.h"
#include "SonyTV.h"
#include "AdvancedRemoteControl.h"

int main() {

    SonyTV sonyTv;

    RemoteControl remoteControl{sonyTv};
    remoteControl.turnOn();
    remoteControl.turnOff();

    AdvancedRemoteControl advancedRemoteControl{sonyTv};
    advancedRemoteControl.turnOn();
    advancedRemoteControl.setChannel(1);
    advancedRemoteControl.turnOff();

    return 0;
}
