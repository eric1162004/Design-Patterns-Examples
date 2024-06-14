#include <iostream>
#include "BrowseHistory.h"
#include "Iterator.h"

using namespace std;

int main() {
    BrowseHistory history;

    history.push("1");
    history.push("2");
    history.push("3");

    auto iterator = history.createIterator();
    while(iterator->hasNext()){
        cout << iterator->current() << endl;
        iterator->next();
    }


    return 0;
}
