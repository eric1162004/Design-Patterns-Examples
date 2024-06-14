#include <iostream>

using namespace std;

#include "WebServer.h"
#include "Compressor.h"
#include "Authenticator.h"
#include "Logger.h"
#include "HttpRequest.h"

int main() {

    HttpRequest httpRequest{"admin", "1234"};
    Compressor compressor{nullptr};
    Logger logger{&compressor};
    Authenticator authenticator{&logger};
    WebServer webServer{&authenticator};
    webServer.handle(httpRequest);

    return 0;
}
