//
// Created by seka5 on 3/30/2022.
//

#ifndef C__LAB_RATIONAL_H
#define C__LAB_RATIONAL_H


class Rational {
private:
    double nominator, dominator;

    void simplify(double nominator, double dominator);

    int gcd(int a, int b);

public:
    Rational();

    bool operator==(const Rational &rhs) const;

    bool operator!=(const Rational &rhs) const;

    bool operator<(const Rational &rhs) const;

    bool operator>(const Rational &rhs) const;

    bool operator<=(const Rational &rhs) const;

    bool operator>=(const Rational &rhs) const;

    Rational(double nominator, double dominator);

    void simplify();

    void print() const;

    double getNominator() const;

    void setNominator(double nominator);

    double getDominator() const;

    void setDominator(double dominator);

    double getValue();

    void setValue(double value);

};


#endif //C__LAB_RATIONAL_H
