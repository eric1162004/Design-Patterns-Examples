//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_CONFIGMANAGER_H
#define DESIGN_PATTERNS_EXAMPLES_CONFIGMANAGER_H

#include <map>
#include <string>

struct Object {
    int value;
};

class ConfigManager {
public:
    void set(std::string key, Object value);
    Object get(std::string key);

    static ConfigManager* getInstance();

private:
    ConfigManager() = default; // private constructor
    static ConfigManager* instance;

    std::map<std::string, Object> settings;
};

#endif //DESIGN_PATTERNS_EXAMPLES_CONFIGMANAGER_H
