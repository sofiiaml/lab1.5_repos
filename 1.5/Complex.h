// Complex.h 
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

//#define COMPLEX_H

class Complex {
private:
    Pair pair;
public:
    Complex();
    Complex(double re, double im);
    double getRe() const;
    double getIm() const;
    void setRe(double re);
    void setIm(double im);
    void Init(double re, double im);
    void Display() const;
    void Read();
    string toString() const;
    friend Complex operator*(const Complex& first, const Complex& second);
    friend Complex operator-(const Complex& first, const Complex& second);
};
