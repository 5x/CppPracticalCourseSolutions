#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


long float i = 0
long float j;

void f(int num, int a, int b, int c) {
    if (!num == 0) {
        f(num - 1, a, c, b);

        if (j - 300 < i++) {
            cout << a << " -> " << b << endl;
        }

        f(num - 1, c, b, a);
    }
}

int _tmain(int argc, _TCHAR* argv[]) {
    int num;

    cout << "Size of tower: ";
    cin >> num;

    if (num > 64) {
        cout << "So height value. Retry again." << endl;
        return _tmain(argc, NULL);
    }

    j = pow(2.0, num) - 1;
    f(num, 1, 2, 3);

    cout << fixed << setprecision(0);
    cout << "Rearrangements: " << j << endl;

    system("pause");
    return 0;
}
