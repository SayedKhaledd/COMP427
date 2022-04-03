//
// Created by seka5 on 4/3/2022.
//

#include "Decimal.h"
#include <iostream>
#include<string>
#include <cmath>
#include <cstring>

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
    if (decimal < 0) {
        cout << "-" << integer << "." << decimal * -1 << endl;
    } else
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
    string s = to_string(d);
    int dotIndex = s.find('.');
    string s1 = s.substr(0, dotIndex);
    string s2 = s.substr(dotIndex + 1, s.length() - 1);
    int myInteger = stoi(s1), myDouble = stod(s2);

    if (s[0] == '-') {
        myDouble *= -1;
    }
    setInteger(myInteger);
    setDecimal(myDouble);

}


