#include "stdafx.h"
#include <iostream>

using namespace std;


double celsius(double F) {
    return (F - 32) * 5 / 9;
}

double fahrenheit(double C) {
    return C * 1.8 + 32;
}

int _tmain(int argc, _TCHAR* argv[]) {
    cout << "C" << "\t" << "F" << "\t   " << "C" << "\t"
        << "F" << "\t   " << "C" << "\t" << "F" << "\t   " << "C" << "\t" << "F" << endl;

    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j < 4; j++) {
            cout << i + (j * 25) << "\t" << fahrenheit(i + (j * 25)) << "\t   ";
        }

        cout << endl;
    }

    system("pause");

    return 0;
}
