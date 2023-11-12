#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int NOD(int a, int b);

    void simplify();

public:
    Fraction(int num, int den);

    Fraction(const Fraction& fraction);

    int getNumerator(){
        return numerator;
    }

    int getDenominator(){
        return denominator;
    }

    Fraction operator+ (const Fraction& fraction);

    Fraction operator* (const Fraction& fraction);

    Fraction operator/ (const Fraction& fraction);

    void print();
};