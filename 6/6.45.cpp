#include "stdafx.h"
#include <iostream>

using namespace std;


int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }

    return gcd(y, x % y);
}

int _tmain(int argc, _TCHAR* argv[]) {
    unsigned long int x;
    unsigned long int y;

    cout << "num1: ";
    cin >> x;

    cout << "num2: ";
    cin >> y;

    cout << "NOD=" << gcd(x, y) << endl;

    system("pause");
    return 0;
}
