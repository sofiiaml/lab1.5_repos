// Pair.cpp
#include "Pair.h"
#include <iostream>
Pair::Pair() : first(0), second(0) {}
Pair::Pair(double a, double b) : first(a), second(b) {}

Pair operator+(const Pair& first, const Pair& second) {
    return Pair(first.getFirst() + second.getFirst(), first.getSecond() + second.getSecond());
}
Pair operator*(const Pair& first, const Pair& second) {
    return Pair(first.getFirst() * second.getFirst(), first.getSecond() * second.getSecond());
}
void Pair::Init(double a, double b) {
    first = a;
    second = b;
}

void Pair::Read() {
    cout << "Enter the first value: ";cin >> first;
    cout << "Enter the second value: ";cin >> second;
}

void Pair::Display() const {
    cout << "(" << first << ", " << second << ")";
}

std::string Pair::toString() const {
    return "(" + to_string(first) + ", " + to_string(second) + ")";
}