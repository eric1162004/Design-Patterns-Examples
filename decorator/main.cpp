
#include "CloudStream.h"
#include "Stream.h"
#include "EncryptedCloudStream.h"
#include "CompressedCloudStream.h"

using namespace std;

void storeCreditCard(Stream& stream){
    string cardNumber{"1234-1234-1234-1234"};
    stream.write(cardNumber);
}

int main() {

    CloudStream cloudStream;
    EncryptedCloudStream encryptedCloudStream{&cloudStream};
    CompressedCloudStream compressedCloudStream{encryptedCloudStream};
    storeCreditCard(compressedCloudStream);

    return 0;
}
