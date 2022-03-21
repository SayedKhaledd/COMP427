//
// Created by seka5 on 2/12/2022.
//
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void passByReference(int *a, int *b);

void nextValue(void *ptr);

void passByPointer(int *x, int *y);

int main() {
//    int a, b;
//    cin >> a >> b;
//    passByReference(&a, &b);
//    cout << a << " " << b << endl;
//    int *x = &a, *y = &b;
//    passByPointer(x, y);
//    cout << a << " " << b << endl;
    char c;
    cin >> c;
    char *l = &c;
    nextValue(&c);

}

void passByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void passByPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void nextValue(void *ptr) {
    char x = (*(char *) ptr);
    if (x >= 48 && x <= 57) {
        int y =  x-48;
        cout << y<<endl;
    }
    cout << ++x << endl;
}
