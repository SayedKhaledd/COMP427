//
// Created by seka5 on 3/10/2022.
//

#include "Complex.h"
#include <iostream>

using namespace std;

class Complex {
public:
    double real, complex;
public:
    Complex() {
        real = 1;
        complex = 2;
    }

    Complex(double real, double complex) {
        this->real = real;

    }

    void print() {
        cout << real << " + " << complex << "i";
    }


};

Complex operator+(Complex c1, Complex c2) {
    Complex c;
    c.real = c1.real + c2.real;
    c.complex = c1.complex + c2.complex;
    return c;
}

Complex operator-(Complex c1, Complex c2) {
    Complex c;
    c.real = c1.real - c2.real;
    c.complex = c1.complex - c2.complex;
    return c;
}
