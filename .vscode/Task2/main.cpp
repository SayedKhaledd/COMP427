#include <iostream>
#include "Complex.cpp"
#include <cmath>

using namespace std;

void fromUser();

Complex getValue(string);

int main()
{
    Complex c1, c2;
    c1.real = 1;
    c1.complex = 2;
    c2.real = 1;
    c2.complex = 2;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    c3.print();
    cout << endl;
    c4.print();
    cout << endl;
    cout << "hello";

    //    fromUser();
    string s;
    cin >> s;
  //  getValue(s);
    return 0;
}

void fromUser()
{
    Complex c1, c2;
    cout << "enter the complex number in this format a +/- b i " << endl;
    int real, complex;
    char c, dummy;
    cin >> real >> c >> complex >> dummy;
    if (c == '-')
    {
        complex *= -1;
    }
    c1.real = real;
    c1.complex = complex;

    cout << endl;
    cout << "enter the complex number in this format a +/- b i " << endl;
    cin >> real >> c >> complex >> dummy;
    if (c == '-')
    {
        complex *= -1;
    }
    c2.real = real;
    c2.complex = complex;
    Complex ck;
    ck = c1 + c2;
    ck.print();
}

Complex getValue(string s)
{
    Complex complex1;
    double real, complex;
    int sign1 = 1, sign2 = 1;
    int i = 0;
    if (s.at(0) == '-')
    {
        sign1 = -1;
        i = 1;
    }
    string realS, complexS;
    while (i < s.length() && s.at(i) != '+' && s.at(i) != '-')
    {
        realS += s.at(i);
        i++;
    }
    real = stoi(realS);
    real *= sign1;
    if (i < s.length() && s.at(i) == '-')
    {
        sign2 = -1;
        i++;
    }
    while (i < s.length() && s.at(i) != 'i')
    {
        complexS += s.at(i);
        i++;
    }

    complex = stoi(complexS);
    complex *= sign2;
    cout << "real is " << real << " complex is " << complex;
    complex1.real = real;
    complex1.complex = complex;
    return complex1;
}
