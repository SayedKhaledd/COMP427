//
// Created by seka5 on 4/2/2022.
//

#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial() {

}

Polynomial::~Polynomial() {

}

void Polynomial::print() {
    for (Term i: Polynomial::poly) {
        i.print();
        cout << " ";
    }
    cout << endl;
}

void Polynomial::add(Term t) {

    poly.push_back(t);
}


const vector<Term> &Polynomial::getPoly() const {
    return poly;
}

void Polynomial::setPoly(const vector<Term> &poly) {
    Polynomial::poly = poly;
}


