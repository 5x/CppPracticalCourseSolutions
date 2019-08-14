#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;


double hyprtenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int _tmain(int argc, _TCHAR* argv[]) {
    const int n = 3;
    double a;
    double b;
    double rezult[n];

    cout << "//Type <a#>TAB<b#> ENTER <retry> prev..." << endl;
    cout << "#" << "\t" << "a" << "\t" << "b" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t";
        cin >> a; cin >> b;

        rezult[i] = hyprtenuse(a, b);
    }

    cout << "#" << "\t" << "c" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << rezult[i] << endl;
    }

    system("pause");
    return 0;
}
