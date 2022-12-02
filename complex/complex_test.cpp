//
// Created by Haoyu Wu on 12/1/22.
//
#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    complex c1(2, 1);
    complex c2(3, 2);
    cout << (c1 += c2) << endl;

    // complex += double
    complex c3(2, 1);
    cout << (c3 += 2.0) << endl;
    return 0;
}