//
// Created by Haoyu Wu on 12/1/22.
//

#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

#include <iostream>

using namespace std;

class complex {
public:
    complex (double r = 0, double i = 0) : re(r), im(i) {}

    complex& operator += (const complex& r) {
        return __doapl (this, r);
    }

    // overload += operator as a member function
    complex& operator += (const double a) {
        this->re += a;
        return *this;
    }

    complex& __doapl(complex* ths, const complex& r) {
        ths->re += r.re;
        ths->im += r.im;
        return *ths;
    }

    double real() const { return re; }

    double imag() const { return im; }

private:
    double re, im;
    friend complex& __doapl (complex *, const complex&);

};

ostream& operator << (ostream& os, const complex& x) {
    return os << '(' << x.real() << ',' << ' ' << x.imag() << 'i' << ')';
}

#endif //COMPLEX_COMPLEX_H
