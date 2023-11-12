#include "Class.h"

int Fraction::NOD(int a, int b) {
    int num = abs(numerator);
    int den = abs(denominator);
    while (num != den){
        if (num > den) {
            num -= den;
        }
        else{
            den -= num;
        }
    }
    return num;
}

void Fraction::simplify() {
    int comDiv = NOD(numerator, denominator);
    numerator /= comDiv;
    denominator /= comDiv;
    if ((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0)) {
        numerator = -1*abs(numerator);
        denominator = abs(denominator);
    } else {
        numerator = abs(numerator);
        denominator = abs(denominator);
    }
}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    if (denominator == 0) {
        cerr << "Bro, denominator cannot be zero. Setting denominator to 1" << endl;
        denominator = 1;
    }
    simplify();
}

Fraction::Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}

Fraction Fraction::operator+ (const Fraction& fraction){
    int resultNum = numerator * fraction.denominator + fraction.numerator * denominator;
    int resultDen = denominator * fraction.denominator;
    Fraction result(resultNum, resultDen);
    result.simplify();
    return result;
}

Fraction Fraction::operator* (const Fraction& fraction) {
    int resultNum = numerator * fraction.numerator;
    int resultDen = denominator * fraction.denominator;
    Fraction result(resultNum, resultDen);
    result.simplify();
    return result;
}

Fraction Fraction::operator/ (const Fraction& fraction){
    if (fraction.numerator == 0) {
        cerr << "Bro, division by zero is not allowed. Returning original fraction" << endl;
        return *this;
    }
    int resultNum = numerator * fraction.denominator;
    int resultDen = denominator * fraction.numerator;
    Fraction result(resultNum, resultDen);
    result.simplify();
    return result;
}

void Fraction::print(){
    cout << numerator << " / " << denominator;
}