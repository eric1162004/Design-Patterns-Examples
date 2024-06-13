//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_HTTPREQUEST_H
#define DESIGN_PATTERNS_EXAMPLES_HTTPREQUEST_H


#include <string>

class HttpRequest {
private:
    std::string username;
    std::string password;
public:
    HttpRequest(const std::string &username, const std::string &password);

    const std::string &getPassword() const;

    const std::string &getUsername() const;
};


#endif //DESIGN_PATTERNS_EXAMPLES_HTTPREQUEST_H
