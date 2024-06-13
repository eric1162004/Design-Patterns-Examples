//
// Created by eric1 on 6/13/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_COMPRESSEDCLOUDSTREAM_H
#define DESIGN_PATTERNS_EXAMPLES_COMPRESSEDCLOUDSTREAM_H

#include "CloudStream.h"

class CompressedCloudStream : public Stream {
public:
    explicit CompressedCloudStream(const Stream &stream);
    void write(std::string& data) override;

private:
    std::string compress(std::string data);
    Stream& stream;
public:
    explicit CompressedCloudStream(Stream &stream);
};


#endif //DESIGN_PATTERNS_EXAMPLES_COMPRESSEDCLOUDSTREAM_H
