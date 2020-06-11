#include "number.h"

int Number::size = 0;

Number::Number() {
    value = ++size;
}

std::string Number::get() {
    return "My number is: " + std::to_string(this->value);
}
