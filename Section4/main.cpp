//
// Created by seka5 on 3/30/2022.
//
#include <iostream>
#include "Rational.h"

#include "Polynomial.h"

using namespace std;

#include <cmath>

Rational operator+(Rational r1, Rational r2) {
    Rational r;
    r.setNominator(r1.getNominator() * r2.getDominator() + r2.getNominator() * r1.getDominator());
    r.setDominator(r1.getDominator() * r2.getDominator());
    r.simplify();

    return r;
}

Rational operator-(Rational r1, Rational r2) {
    Rational r;
    r.setNominator((r1.getNominator() * r2.getDominator()) - (r2.getNominator() * r1.getDominator()));
    r.setDominator(r1.getDominator() * r2.getDominator());
    r.simplify();

    return r;
}

Rational operator*(Rational r1, Rational r2) {
    Rational r;
    r.setNominator(r1.getNominator() * r2.getNominator());
    r.setDominator(r1.getDominator() * r2.getDominator());
    r.simplify();

    return r;
}

Rational operator/(Rational r1, Rational r2) {
    Rational r;
    r.setNominator(r1.getNominator() * r2.getDominator());
    r.setDominator(r1.getDominator() * r2.getNominator());
    r.simplify();

    return r;
}

int operator==(Rational r1, Rational r2) {
    r1.simplify();
    r2.simplify();
    if ((r1.getNominator() == r2.getNominator()) && (r1.getDominator() == r2.getDominator()))
        return 1;
    else
        return 0;
}

int operator<(Rational r1, Rational r2) {
    r1.simplify();
    r2.simplify();
    double val1 = r1.getNominator() / r1.getDominator(), val2 = r2.getNominator() / r2.getDominator();
    if (val1 < val2)
        return 1;
    else
        return 0;
}
int operator<=(Rational r1, Rational r2) {
    r1.simplify();
    r2.simplify();
    double val1 = r1.getNominator() / r1.getDominator(), val2 = r2.getNominator() / r2.getDominator();
    if (val1 <= val2)
        return 1;
    else
        return 0;
}

int operator>(Rational r1, Rational r2) {
    r1.simplify();
    r2.simplify();
    double val1 = r1.getNominator() / r1.getDominator(), val2 = r2.getNominator() / r2.getDominator();
    if (val1 > val2)
        return 1;
    else
        return 0;
}
int operator>=(Rational r1, Rational r2) {
    r1.simplify();
    r2.simplify();
    double val1 = r1.getNominator() / r1.getDominator(), val2 = r2.getNominator() / r2.getDominator();
    if (val1 >= val2)
        return 1;
    else
        return 0;
}

int main() {
    cout << 0/5<< endl;
    Rational r1(0, 5);
    Rational r2(2, 5);
    r1.print();
    r2.print();

    //addition
    Rational r = r1 + r2;
    r.print();

    //subtraction
    r = r1 - r2;
    r.print();

    //multiplication
    r = r1 * r2;
    r.print();

    //division
    r = r1 / r2;
    r.print();

 //equality
    if (r1 == r2)
        cout << "yes equal" << endl;
    else
        cout << "no not equal" << endl;

    if (r1 < r2)
        cout << "yes r1 is smaller than r2" << endl;
    else
        cout << "no r1 is not smaller than r2" << endl;

    if (r1 <= r2)
        cout << "yes r1 is smaller than or equal r2" << endl;
    else
        cout << "no r1 is not smaller than or equal r2" << endl;

    if (r1 > r2)
        cout << "yes r1 is greater than r2" << endl;
    else
        cout << "no r1 is not greater than r2" << endl;

    if (r1 >= r2)
        cout << "yes r1 is greater than or equal r2" << endl;
    else
        cout << "no r1 is not greater than or equal r2" << endl;




}
