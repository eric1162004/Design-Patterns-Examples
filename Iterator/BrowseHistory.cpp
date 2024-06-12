//
// Created by eric1 on 6/12/2024.
//

#include "BrowseHistory.h"

void BrowseHistory::push(string url) {
    urls.push_back(url);
}

string BrowseHistory::pop() {
    string temp = urls.back();
    urls.pop_back();
    return temp;
}

std::unique_ptr<Iterator<string>> BrowseHistory::createIterator() {
    return make_unique<BrowseHistory::ListIterator>(this);
}

BrowseHistory::ListIterator::ListIterator(BrowseHistory *pHistory): pHistory{pHistory} {}

bool BrowseHistory::ListIterator::hasNext() {
    return (index < pHistory->urls.size());
}

string BrowseHistory::ListIterator::current() {
    return pHistory->urls[index];
}

void BrowseHistory::ListIterator::next() {
    index++;
}


