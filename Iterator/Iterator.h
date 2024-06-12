//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ITERATOR_H
#define DESIGN_PATTERNS_EXAMPLES_ITERATOR_H

#include <string>

template<typename T>
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual T current() = 0;
    virtual void next() = 0;
};


#endif //DESIGN_PATTERNS_EXAMPLES_ITERATOR_H
