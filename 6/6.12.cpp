#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>


float get_charge_value(int h) {
    float sum = 2;

    if (h > 3) {
        sum += ((h - 3) * 0.5);
    }

    if (sum >= 10) {
        sum = 10;
    }

    return sum;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int const n = 3;

    float h[n] = { 1.5, 4, 24 };
    float h_sum = 0;
    float s_sum = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car" << "\t" << "Hours" << "\t" << "Charge" << std::endl;

    for (int i = 0; i < n; i++) {
        float charge = get_charge_value(int(h[i]));
        h_sum += h[i];
        s_sum += charge;

        std::cout << i + 1 << "\t" << h[i] << "\t" << charge << std::endl;
    }

    std::cout << "TOTAL" << "\t" << h_sum << "\t" << s_sum << std::endl;

    std::cin.get();

    return 0;
}
