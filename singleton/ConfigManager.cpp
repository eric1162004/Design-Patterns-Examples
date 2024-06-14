//
// Created by eric1 on 6/13/2024.
//

#include "ConfigManager.h"


void ConfigManager::set(std::string key, Object value) {
    settings.insert({key, value});
}

Object ConfigManager::get(std::string key) {
    return settings.at(key);
}

// static member must be initialized outside the class defined
ConfigManager* ConfigManager::instance {nullptr};

ConfigManager* ConfigManager::getInstance() {
    if (instance == nullptr){
        instance = new ConfigManager();
    }
    return instance;
}




