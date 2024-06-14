//
// Created by eric1 on 6/13/2024.
//

#include "Slide.h"

Slide::Slide(const std::string &text) : text(text) {}

const std::string &Slide::getText() const {
    return text;
}
