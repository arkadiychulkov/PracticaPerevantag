#pragma once
#include<iostream>

class Drib {
private:
    int numerator;
    int denominator;

    int findGCD(int a, int b);

    void skoroch();

public:
    Drib(int num, int denom);
    Drib operator+(Drib& other);
    Drib operator-(Drib& other);
    Drib operator*(Drib& other);
    Drib operator/(Drib& other);

    friend std::ostream& operator<<(std::ostream& os, const Drib& fraction);
};

