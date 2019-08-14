#include "stdafx.h"
#include <iostream>


int integerPower(int base, int exponent) {
    int t = base;

    for (exponent; exponent > 1; exponent--) {
        base *= t;
    }

    return base;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int base;
    int exponent;

    std::cout << "base: ";
    std::cin >> base;

    std::cout << "exponent: ";
    std::cin >> exponent;

    std::cout << "base^exponent=" << integerPower(base, exponent) << std::endl;

    std::cin.get();

    return 0;
}
