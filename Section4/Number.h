//
// Created by seka5 on 4/3/2022.
//

#ifndef C__LAB_NUMBER_H
#define C__LAB_NUMBER_H


#include "Decimal.h"
#include "Rational.h"

class Number {
private:
    int integer_value = 0;
    Decimal decimal_value;
    Rational rational_value;
public:

    Number();

    Number(double value);

    void setValue(double d);

    double getValue();

    bool operator==(const Number &rhs) const;

    bool operator!=(const Number &rhs) const;

    bool operator<(const Number &rhs) const;

    bool operator>(const Number &rhs) const;

    bool operator<=(const Number &rhs) const;

    bool operator>=(const Number &rhs) const;

    void printDecimal();

    void printRational();

    void printInteger();
};


#endif //C__LAB_NUMBER_H
