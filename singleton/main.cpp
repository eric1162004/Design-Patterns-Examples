
#include <iostream>
#include <vector>
#include "ConfigManager.h"

int main() {

    ConfigManager* pConfigManager1 = ConfigManager::getInstance();
    pConfigManager1->set("a", {1});

    ConfigManager* pConfigManager2 = ConfigManager::getInstance();
    pConfigManager2->set("v", {3});

    std::cout << pConfigManager2->get("a").value << std::endl;
    std::cout << pConfigManager1->get("v").value << std::endl;

    return 0;
}
