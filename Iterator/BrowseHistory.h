//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_BROWSEHISTORY_H
#define DESIGN_PATTERNS_EXAMPLES_BROWSEHISTORY_H

#include <vector>
#include <string>
#include "Iterator.h"
#include <memory>

using namespace std;

class BrowseHistory {
public:
    void push(string url);
    string pop();
    std::unique_ptr<Iterator<string>> createIterator();

private:
    vector<string> urls;

    class ListIterator : public Iterator<string> {
    public:
        explicit ListIterator(BrowseHistory* pHistory);
        bool hasNext() override;
        string current() override;
        void next() override;
    private:
        BrowseHistory* pHistory;
        int index {0};
    };
};


#endif //DESIGN_PATTERNS_EXAMPLES_BROWSEHISTORY_H
