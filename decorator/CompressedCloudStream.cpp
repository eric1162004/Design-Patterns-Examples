//
// Created by eric1 on 6/13/2024.
//

#include "CompressedCloudStream.h"


void CompressedCloudStream::write(std::string& data) {
    std::string compressedData = compress(data);
    stream.write(compressedData);
}

std::string CompressedCloudStream::compress(std::string data) {
    return data.substr(0,5);
}

CompressedCloudStream::CompressedCloudStream(Stream &stream) : stream(stream) {}

