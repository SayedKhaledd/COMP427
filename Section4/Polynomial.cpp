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
        cout << " " << endl;
    }
}

bool Polynomial::add(Term t) {

    return false;
}
