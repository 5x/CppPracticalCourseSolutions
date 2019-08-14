#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;


bool f(int n) {
    if (n % 2 == 0) {
        return 0;
    }

    int t = sqrt(n);

    for (int i = 3; i <= t; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}


int _tmain(int argc, _TCHAR* argv[]) {
    const int n = 1000;

    for (int i = 1; i <= n; i++) {
        if (f(i) != 0) {
            cout << i << "\t";
        }
    }

    cout << endl;

    std::cin.get();

    return 0;
}
