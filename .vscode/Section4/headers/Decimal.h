//
// Created by seka5 on 4/3/2022.
//

#ifndef C__LAB_DECIMAL_H
#define C__LAB_DECIMAL_H


class Decimal {
private:
    int integer;
    int decimal;
public:
    Decimal();

    Decimal(int integer, int decimal);

    void print();

    double getValue();

    void setValue(double d);

    int getInteger() const;

    void setInteger(int integer);

    int getDecimal() const;

    void setDecimal(int decimal);

    bool operator==(const Decimal &rhs) const;

    bool operator!=(const Decimal &rhs) const;

    bool operator<(const Decimal &rhs) const;

    bool operator>(const Decimal &rhs) const;

    bool operator<=(const Decimal &rhs) const;

    bool operator>=(const Decimal &rhs) const;

};


#endif //C__LAB_DECIMAL_H
