//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ENCRYPTEDCLOUDSTREAM_H
#define DESIGN_PATTERNS_EXAMPLES_ENCRYPTEDCLOUDSTREAM_H


#include <string>
#include "CloudStream.h"

class EncryptedCloudStream : public Stream {
public:
    explicit EncryptedCloudStream(Stream *stream);
    void write(std::string& data) override;

private:
    Stream* stream;
    std::string encrypt(std::string& data);
};


#endif //DESIGN_PATTERNS_EXAMPLES_ENCRYPTEDCLOUDSTREAM_H
