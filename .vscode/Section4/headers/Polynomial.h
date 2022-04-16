//
// Created by seka5 on 4/2/2022.
//

#ifndef C__LAB_POLYNOMIAL_H
#define C__LAB_POLYNOMIAL_H

#include "Term.h"
#include <vector>

using namespace std;

class Polynomial {
private:
    vector<Term> poly;
public:
    Polynomial();

    void print();

    void add(Term t);

    void simplfiy();

    const vector<Term> &getPoly() const;

    void setPoly(const vector<Term> &poly);

    virtual ~Polynomial();
};


#endif //C__LAB_POLYNOMIAL_H
