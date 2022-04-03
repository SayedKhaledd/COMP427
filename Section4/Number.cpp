//
// Created by seka5 on 4/3/2022.
//

#include "Number.h"
#include <iostream>

using namespace std;

Number::Number() {

}

Number::Number(double value) {
    setValue(value);
}


void Number::setValue(double d) {
    integer_value = d;
    decimal_value.setValue(d);
    rational_value.setValue(d);

}

double Number::getValue() {
    return decimal_value.getValue();
}

bool Number::operator==(const Number &rhs) const {
    return integer_value == rhs.integer_value &&
           decimal_value == rhs.decimal_value &&
           rational_value == rhs.rational_value;
}

bool Number::operator!=(const Number &rhs) const {
    return !(rhs == *this);
}

bool Number::operator<(const Number &rhs) const {
    if (integer_value < rhs.integer_value)
        return true;
    if (rhs.integer_value < integer_value)
        return false;
    if (decimal_value < rhs.decimal_value)
        return true;
    if (rhs.decimal_value < decimal_value)
        return false;
    return rational_value < rhs.rational_value;
}

bool Number::operator>(const Number &rhs) const {
    return rhs < *this;
}

bool Number::operator<=(const Number &rhs) const {
    return !(rhs < *this);
}

bool Number::operator>=(const Number &rhs) const {
    return !(*this < rhs);
}

void Number::printDecimal() {
    decimal_value.print();
}

void Number::printRational() {
    rational_value.print();
}

void Number::printInteger() {
    cout << integer_value << endl;
}



