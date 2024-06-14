#include <iostream>
#include "HtmlDocument.h"

using namespace std;

int main() {

    HtmlDocument htmlDocument;
    htmlDocument.add(new HeadingNode);
    htmlDocument.add(new AnchorNode);
    HighlightOperation highlightOperation;
    htmlDocument.execute(highlightOperation);

    return 0;
}
