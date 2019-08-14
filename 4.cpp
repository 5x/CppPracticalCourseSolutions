#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


double fact(int n) {
    if (n < 1) {
        return 1;
    }

    return n * fact(n - 1);
}

double e(int x) {
    double t = 1
        double e = t;

    for (int i = 1; t > 0; i++) {
        t = t * x / i;
        e += t;
    }

    return e;
}

int in(int n) {
    cin >> n;

    if (n < 0) {
        cout << "Incorrect value. Try again." << endl;

        system("pause");
        exit(1);
    }

    return n;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int n;

    cout << "!n - type number n: ";
    n = in(0);

    cout << "!n=" << fact(n) << endl;
    cout << "accuracy of constant e: ";
    n = in(0);

    cout << setprecision(n);

    cout << "e=" << e(1) << endl;
    cout << "e^x - type value of x: "; n = in(0);
    cout << "e^x=" << e(n) << endl;

    system("pause");

    return 0;
}
