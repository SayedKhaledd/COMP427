//
// Created by seka5 on 3/30/2022.
//
#include <iostream>
#include <cmath>
#include "Term.h"
#include "Decimal.h"
#include "Rational.h"
#include "Number.h"


using namespace std;


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


Decimal operator+(Decimal d1, Decimal d2) {
    Decimal d;
    d.setValue(d1.getValue() + d2.getValue());
    return d;
}

Decimal operator-(Decimal d1, Decimal d2) {
    Decimal d;
    d.setValue(d1.getValue() - d2.getValue());

    return d;
}

Decimal operator*(Decimal d1, Decimal d2) {
    Decimal d;
    d.setValue(d1.getValue() * d2.getValue());
    return d;
}

Decimal operator/(Decimal d1, Decimal d2) {
    Decimal d;
    d.setValue(d1.getValue() / d2.getValue());
    return d;
}

Number operator+(Number c1, Number c2) {
    Number c;
    c.setValue(c1.getValue() + c2.getValue());
    return c;
}

Number operator-(Number c1, Number c2) {
    Number c;
    c.setValue(c1.getValue() - c2.getValue());
    return c;
}

Number operator*(Number c1, Number c2) {
    Number c;
    c.setValue(c1.getValue() * c2.getValue());
    return c;
}

Number operator/(Number c1, Number c2) {
    Number c;
    c.setValue(c1.getValue() / c2.getValue());
    return c;
}
//Number operator=( Number c2) {
//    Number c;
//    c.setValue(c2.getValue());
//    return c;
//}

Term operator+(Term t1, Term t2) {
    Term t;
    if (t1.getExponent() == t2.getExponent()) {
        t.setCoefficient(t1.getCoefficient() + t2.getCoefficient());
        t.setExponent(t1.getExponent());
        return t;
    }
}

Term operator-(Term t1, Term t2) {
    Term t;
    if (t1.getExponent() == t2.getExponent()) {
        t.setCoefficient(t1.getCoefficient() - t2.getCoefficient());
        t.setExponent(t1.getExponent());
        return t;
    }
}

Term operator*(Term t1, Term t2) {
    Term t;
    t.setCoefficient(t1.getCoefficient() * t2.getCoefficient());
    t.setExponent(t1.getExponent() + t2.getExponent());
    return t;

}
Term operator/(Term t1, Term t2) {
    Term t;
    t.setCoefficient(t1.getCoefficient() / t2.getCoefficient());
    t.setExponent(t1.getExponent() - t2.getExponent());
    return t;

}
int main() {
    Decimal ll;
    ll.setValue(1 / 3.0);
    cout << ll.getValue() << endl;
    ll.print();
    cout << 0 / 5 << endl;
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

    Decimal d1(1, 8), d2(1, 2);
    d1.print();
    d2.print();
    Decimal d;
    d = d1 + d2;
    d.print();
    d.setValue(-0.6);
    d.print();
    d = d1 * d2;
    d.print();
    d = d1 / d2;
    d.print();

    Rational r4;
    r4.setValue(2.5);
    r4.print();

    Number c1(1.2), c2(1.8);
    c1.printDecimal();
    c1.printRational();
    c1.printInteger();
    Number c;
    c = c1 + c2;
    c.printDecimal();
    c.printRational();
    c = c1 - c2;
    c.printDecimal();
    c.printRational();
    c = c1 * c2;

    c.printDecimal();
    c.printRational();


    c = c1 / c2;
    c.printDecimal();
    c.printRational();

    Number c4(2), c3(3);
    Term t1(c4, c3);
    t1.print();
    Term t;
    t = t1 + t1;
    t.print();
    t = t1 - t1;
    t.print();
    t = t1 * t1;
    t.print();
    t = t1 / t1;
    t.print();
}
