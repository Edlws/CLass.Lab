#include "Class.h"

int main() {
    Fraction fraction1(-5, 7);
    Fraction fraction2(6, 17);

    Fraction sum = fraction1 + fraction2;
    Fraction prod = fraction1 * fraction2;
    Fraction quot = fraction1 / fraction2;

    cout << "Fraction 1: ";
    fraction1.print();
    cout << endl;

    cout << "Fraction 2: ";
    fraction2.print();
    cout << endl;

    cout << "Summary: ";
    sum.print();
    cout << endl;

    cout << "Product: ";
    prod.print();
    cout << endl;

    cout << "Quotient: ";
    quot.print();
    cout << endl;

    return 0;
}

