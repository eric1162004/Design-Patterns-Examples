
#include <iostream>
#include <vector>
#include "Library.h"
#include "EbookProxy.h"

int main() {

    Library library;

    std::string fileNames[] {"a", "b", "c"};
    for(auto& file : fileNames){
        library.add(new EbookProxy{file});
    }

    library.openEbook("a");
    library.openEbook("b");
//    library.openEbook("c");

    return 0;
}
