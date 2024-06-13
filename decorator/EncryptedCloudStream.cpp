//
// Created by eric1 on 6/13/2024.
//

#include "EncryptedCloudStream.h"

void EncryptedCloudStream::write(std::string& data) {
    std::string encryptedData = encrypt(data);
    stream->write(encryptedData);
}

std::string EncryptedCloudStream::encrypt(std::string& data) {
    return "321k3h13k4rj234";
}

EncryptedCloudStream::EncryptedCloudStream(Stream *stream) : stream(stream) {}
