//
// Created by eric1 on 6/12/2024.
//

#include "DataSource.h"

int DataSource::getValue() const {
    return value;
}

void DataSource::setValue(int value) {
    DataSource::value = value;
    notifyObservers();
}
