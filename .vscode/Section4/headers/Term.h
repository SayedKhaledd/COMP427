//
// Created by seka5 on 3/30/2022.
//

#ifndef C__LAB_TERM_H
#define C__LAB_TERM_H

#include "Number.h"

class Term
{
private:
    Number coefficient, exponent;

public:
    Term();

    Term(Number coefficient, Number exponent);

    void print();

    const Number &getCoefficient() const;

    void setCoefficient(const Number &coefficient);

    const Number &getExponent() const;

    void setExponent(const Number &exponent);

    bool operator==(const Term &rhs) const;

    bool operator!=(const Term &rhs) const;

    bool operator<(const Term &rhs) const;

    bool operator>(const Term &rhs) const;

    bool operator<=(const Term &rhs) const;

    bool operator>=(const Term &rhs) const;
};

#endif // C__LAB_TERM_H
