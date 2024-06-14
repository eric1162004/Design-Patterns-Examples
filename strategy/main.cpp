#include <iostream>
#include "ImageStorage.h"
#include "JpegCompressor.h"
#include "BlackAndWhiteFilter.h"

using namespace std;

int main() {

    JpegCompressor jpegCompressor;
    BlackAndWhiteFilter  blackAndWhiteFilter;
    ImageStorage imageStorage{jpegCompressor, blackAndWhiteFilter};
    string url = "image_url";
    imageStorage.store(url);

    return 0;
}
