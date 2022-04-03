//
// Created by seka5 on 4/3/2022.
//

#include "Decimal.h"
#include <iostream>
#include<string>
#include <cmath>

using namespace std;

Decimal::Decimal() : Decimal(0, 0) {

}

Decimal::Decimal(int integer, int decimal) {
    Decimal::integer = integer;
    Decimal::decimal = decimal;
}

int Decimal::getInteger() const {
    return integer;
}

void Decimal::setInteger(int integer) {
    Decimal::integer = integer;
}

int Decimal::getDecimal() const {
    return decimal;
}

void Decimal::setDecimal(int decimal) {
    Decimal::decimal = decimal;
}

void Decimal::print() {
    cout << Decimal::integer << "." << Decimal::decimal << endl;
}

bool Decimal::operator==(const Decimal &rhs) const {
    return integer == rhs.integer &&
           decimal == rhs.decimal;
}

bool Decimal::operator!=(const Decimal &rhs) const {
    return !(rhs == *this);
}

bool Decimal::operator<(const Decimal &rhs) const {
    if (integer < rhs.integer)
        return true;
    if (rhs.integer < integer)
        return false;
    return decimal < rhs.decimal;
}

bool Decimal::operator>(const Decimal &rhs) const {
    return rhs < *this;
}

bool Decimal::operator<=(const Decimal &rhs) const {
    return !(rhs < *this);
}

bool Decimal::operator>=(const Decimal &rhs) const {
    return !(*this < rhs);
}

double Decimal::getValue() {
    double value = Decimal::integer;
    double temp = Decimal::decimal;
    string s = to_string((int) temp);
    value += ((double) temp / pow(10, s.length()));
    return value;
}

void Decimal::setValue(double d) {

    double integer;
    double myDouble = modf(d, &integer);
    int integer_value = integer;
    double temp = myDouble;
    int counter = 0;
    while ((int) temp != temp) {
        temp *= 10;
        counter++;



    }

    setInteger(integer_value);
    setDecimal(myDouble * pow(10, counter));
}


