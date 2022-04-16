//
// Created by seka5 on 3/30/2022.
//

#include "headers/Term.h"
#include <iostream>
#include "Number.cpp"
using namespace std;



Term::Term(Number coefficient, Number exponent) {
    Term::coefficient = coefficient;
    Term::exponent = exponent;
}

void Term::print() {
    if (coefficient.getValue() == 0) {
        cout << 0 << endl;
    } else if (exponent == 0) {
        cout << 1 << endl;
    } else
        cout << coefficient.getValue() << "X^" << exponent.getValue() << endl;
}

const Number &Term::getCoefficient() const {
    return coefficient;
}

void Term::setCoefficient(const Number &coefficient) {
    Term::coefficient = coefficient;
}

const Number &Term::getExponent() const {
    return exponent;
}

void Term::setExponent(const Number &exponent) {
    Term::exponent = exponent;
}

bool Term::operator==(const Term &rhs) const {
    return coefficient == rhs.coefficient &&
           exponent == rhs.exponent;
}

bool Term::operator!=(const Term &rhs) const {
    return !(rhs == *this);
}

bool Term::operator<(const Term &rhs) const {
    if (coefficient < rhs.coefficient)
        return true;
    if (rhs.coefficient < coefficient)
        return false;
    return exponent < rhs.exponent;
}

bool Term::operator>(const Term &rhs) const {
    return rhs < *this;
}

bool Term::operator<=(const Term &rhs) const {
    return !(rhs < *this);
}

bool Term::operator>=(const Term &rhs) const {
    return !(*this < rhs);
}


