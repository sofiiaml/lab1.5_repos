//Pair.h
#pragma once
#include <string>
using namespace std;

class Pair
{
private:
	double first;
	double second;

public:
    Pair();
    Pair(double a, double b);
    double getFirst() const { return first; }
    double getSecond() const { return second; }
    void setFirst(double a) { first = a; }
    void setSecond(double b) { second = b; }
    void Init(double a, double b);
    void Display() const;
    void Read();
    string toString() const;
    friend Pair operator+(const Pair& first, const Pair& second);
    friend Pair operator*(const Pair& first, const Pair& second);
};
