//
// Created by seka5 on 3/30/2022.
//

#include <iostream>
#include "Rational.h"
#include <algorithm>
#include <cmath>

using namespace std;

Rational::Rational() {
    Rational::nominator = 0;
    Rational::dominator = 1;
}

Rational::Rational(double nominator, double dominator) {
    if (dominator <= 0) {
        cout << "the dominator can't be 0 or a negative value, changed to 1 !" << endl;
        dominator = 1;
    }
    Rational::nominator = nominator;
    Rational::dominator = dominator;
    simplify(Rational::nominator, Rational::dominator);


}

void Rational::print() const {
    cout << Rational::nominator << "/" << Rational::dominator << endl;
}

void Rational::simplify(double nominator, double dominator) {
    int my_gcd = gcd(nominator, dominator);
    if (my_gcd == 0) {
        Rational::nominator = 0;
        Rational::dominator = dominator;
    } else {
        Rational::nominator = nominator / my_gcd;
        Rational::dominator = dominator / my_gcd;
    }
}

void Rational::simplify() {
    simplify(Rational::nominator, Rational::dominator);
}


int Rational::gcd(int a, int b) {
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else return gcd(a, b - a);
}

double Rational::getNominator() const {
    return nominator;
}

void Rational::setNominator(double nominator) {
    Rational::nominator = nominator;
}

double Rational::getDominator() const {
    return dominator;
}

void Rational::setDominator(double dominator) {
    if (dominator <= 0)
        dominator = 1;
    Rational::dominator = dominator;
}

bool Rational::operator==(const Rational &rhs) const {
    return nominator == rhs.nominator &&
           dominator == rhs.dominator;
}

bool Rational::operator!=(const Rational &rhs) const {
    return !(rhs == *this);
}

bool Rational::operator<(const Rational &rhs) const {
    if (nominator < rhs.nominator)
        return true;
    if (rhs.nominator < nominator)
        return false;
    return dominator < rhs.dominator;
}

bool Rational::operator>(const Rational &rhs) const {
    return rhs < *this;
}

bool Rational::operator<=(const Rational &rhs) const {
    return !(rhs < *this);
}

bool Rational::operator>=(const Rational &rhs) const {
    return !(*this < rhs);
}

double Rational::getValue() {
    return (Rational::nominator / (double) Rational::dominator);
}

void Rational::setValue(double value) {

    double intVal = floor(value);

    double fVal = value - intVal;
    const long long perceision = 1000000000;
    long gcdVal = gcd(round(fVal * perceision), perceision);
    long long nominator = round(fVal * perceision) / gcdVal;
    long long dominator = perceision / gcdVal;
    setDominator(dominator);
    setNominator((intVal * dominator) + nominator);
}
