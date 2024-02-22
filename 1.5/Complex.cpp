// Complex.cpp
#include "Complex.h"
#include <iostream>

Complex::Complex() : pair(0, 0) {}
Complex::Complex(double re, double im) : pair(re, im) {}

Complex operator*(const Complex& first, const Complex& second) {
    double re = first.pair.getFirst() * second.pair.getFirst() - first.pair.getSecond() * second.pair.getSecond();
    double im = first.pair.getFirst() * second.pair.getSecond() + first.pair.getSecond() * second.pair.getFirst();
    return Complex(re, im);
}
Complex operator-(const Complex& first, const Complex& second) {
    double re = first.pair.getFirst() - second.pair.getFirst();
    double im = first.pair.getSecond() - second.pair.getSecond();
    return Complex(re, im);
}
double Complex::getRe() const { return pair.getFirst(); }

double Complex::getIm() const { return pair.getSecond(); }

void Complex::setRe(double re) { pair.setFirst(re); }

void Complex::setIm(double im) { pair.setSecond(im); }

void Complex::Init(double re, double im) { pair.Init(re, im); }

void Complex::Read() {
    cout << "Enter the real part: ";
    double re;
    cin >> re;
    cout << "Enter the imaginary part: ";
    double im;
    cin >> im;
    pair.Init(re, im);
}

void Complex::Display() const {
    cout << "(" << getRe() << " + " << getIm() << "i)";
}

string Complex::toString() const {
    return "(" + to_string(getRe()) + " + " + to_string(getIm()) + "i)";
}
