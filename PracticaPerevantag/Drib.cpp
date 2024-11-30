#include "Drib.h"
#include<iostream>

int Drib::findGCD(int a, int b){
    while (b != 0) {
        int ch = b;
        b = a % b;
        a = ch;
    }
    return a;
}

void Drib::skoroch() {
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Drib::Drib(int num, int denom) {
    numerator = num;
    denominator = denom;
    skoroch();
}

Drib Drib::operator+(Drib& other) {
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Drib(num, denom);
}

Drib Drib::operator-(Drib& other)  {
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Drib(num, denom);
}

Drib Drib::operator*(Drib& other) {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Drib(num, denom);
}

Drib Drib::operator/(Drib& other) {
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Drib(num, denom);
}

std::ostream& operator<<(std::ostream& os, const Drib& fraction) {
    os << fraction.numerator << "/" << fraction.denominator;
    return os;
}
