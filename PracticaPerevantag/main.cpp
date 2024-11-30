#include <iostream>
#include "Drib.h"

int main() {
    Drib drib1(3, 4);
    Drib drib2(2, 5);

    std::cout << "1: " << drib1 << std::endl;
    std::cout << "2: " << drib2 << std::endl;

    std::cout << "+: " << (drib1 + drib2) << std::endl;
    std::cout << "-: " << (drib1 - drib2) << std::endl;
    std::cout << "*: " << (drib1 * drib2) << std::endl;
    std::cout << "/: " << (drib1 / drib2) << std::endl;

    return 0;
}
