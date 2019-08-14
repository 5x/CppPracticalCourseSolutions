#include "stdafx.h"
#include <iostream>
#include <conio.h>


bool f(int n, int i, int j) {
    if (n == i) {
        return true;
    }

    if (i > n) {
        return false;
    }

    f(n, i + j++, j);
}

int _tmain(int argc, _TCHAR* argv[]) {
    const int n = 1000;
    for (int i = 1; i <= n; i++) {
        if (f(i, 0, 0) != 0) {
            std::cout << i << "\t";
        }
    }

    std::cin.get();

    return 0;
}
