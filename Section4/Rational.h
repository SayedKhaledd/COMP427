//
// Created by seka5 on 3/30/2022.
//

#ifndef C__LAB_RATIONAL_H
#define C__LAB_RATIONAL_H


class Rational {
private:
    double nominator, dominator;
public:
    Rational();

    Rational(double nominator, double dominator);

    void simplify();

    void print() const;


private:
    void simplify(double nominator, double dominator);

    int gcd(int a, int b);

public:
    double getNominator() const;

    void setNominator(double nominator);

    double getDominator() const;

    void setDominator(double dominator);

};


#endif //C__LAB_RATIONAL_H
