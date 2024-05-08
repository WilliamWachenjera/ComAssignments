#include "rectangle.h"

Rectangle::Rectangle() {//default constructor
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(float len, float wid) {//overloaded constructor
    length = len;
    width = wid;
}

Rectangle::~Rectangle() {
    // Destructor does nothing for now
}

void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
