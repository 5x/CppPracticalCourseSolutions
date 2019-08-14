#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;


void f(int Year) {
    cout << fixed << setprecision(2);

    double sum;
    double value = 24.00;
    double rate;

    const int initalYear = 1626;
    const int interestRate = 5;
    const double yearCoefficient = 0.01;

    for (int i = 1; i <= Year - initalYear; i++) {
        rate = (interestRate + rand() % (interestRate + 1)) * yearCoefficient;
        sum = value * pow(1 + rate, i);

        cout << initalYear + i << "\t" << sum << endl;
    }
}


int _tmain(int argc, _TCHAR* argv[]) {
    int t = 0;

    cout << "Input: ";
    cin >> t;

    f(t);

    system("pause");
    return 0;
}
