//1.5.cpp
#include <iostream>
#include "Pair.h"
#include "Complex.h"

using namespace std;

int main() {
    Pair p1(2, 3);
    Pair p2(4, 5);

    p1.Init(6, 7);
    p2.Init(8, 9);

    p1.Read();
    p2.Read();

    cout << "p1: "; p1.Display(); cout << endl;

    cout << "p2: "; p2.Display(); cout << endl;

    cout << "p1: " << p1.toString() << endl;
    cout << "p2: " << p2.toString() << endl;

    Pair MultPair = p1 * p2;
    Pair AddPair = p1 + p2;

    cout << "Result of multiplication (Pair): ";
    MultPair.Display(); cout << endl;

    cout << "Result of addition (Pair): ";
    AddPair.Display(); cout << endl;

    Complex c1(2, 3);
    Complex c2(4, 5);

    c1.Init(6, 7);
    c2.Init(8, 9);

    c1.Read();
    c2.Read();

    cout << "c1: ";c1.Display();cout << endl;

    cout << "c2: ";c2.Display();cout << endl;

    cout << "c1: " << c1.toString() << endl;
    cout << "c2: " << c2.toString() << endl;

    Complex MultComplex = c1 * c2;
    Complex SubComplex = c1 - c2;

    cout << "Result of multiplication (Complex): ";
    MultComplex.Display();
    cout <<  endl;

    cout << "Result of subtraction (Complex): ";
    SubComplex.Display();

    return 0;
}
