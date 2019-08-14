#include "stdafx.h"
#include <iostream>

using namespace std;


char type[4][30] = { "float: ", "double: ", "long double: ", "Enter a " };

union FoatingPoint {
    float floatf;
    double doubled;
    long double longDouble;
}A;

template<typename T>
void f(T t) {
    cout << type[0] << float(t) << endl << type[1] << double(t) << endl << type[2] << long double(t) << endl;
}

int _tmain(int argc, _TCHAR* argv[]) {
    cout << type[3] << type[0];
    cin >> A.floatf; f(A.floatf);

    cout << type[3] << type[1];
    cin >> A.doubled; f(A.doubled);

    cout << type[3] << type[2];
    cin >> A.longDouble; f(A.longDouble);

    system("pause");

    return 0;
}
