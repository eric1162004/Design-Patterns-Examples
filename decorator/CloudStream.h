//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_CLOUDSTREAM_H
#define DESIGN_PATTERNS_EXAMPLES_CLOUDSTREAM_H

#include <string>
#include <iostream>
#include "Stream.h"

class CloudStream : public Stream {
public:
    void write(std::string& data);
};


#endif //DESIGN_PATTERNS_EXAMPLES_CLOUDSTREAM_H
