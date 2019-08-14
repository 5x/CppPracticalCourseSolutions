#include "stdafx.h"
#include <iostream>

using namespace std;


class Complex {
public:
    Complex::Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex::Complex(double a, double b) {
        real = a;
        imaginary = b;
    }

    friend istream& operator>>(istream& in, Complex& its) {
        char t[200];
        char t_imaginary[60];
        bool tf = true;
        int x;
        int y = 0;

        in.getline(t, 200);

        for (x = 0; t[x] != NULL; x++) {
            if (t[x] == '+' || t[x] == '-') {
                y++;
            }
        }

        for (int i = 1; t[i] != NULL && tf; i++) {
            if (t[i] == '+' || t[i] == '-') {
                for (int j = 0; t[j] != 'i' && t[j] != NULL; i++, j++) {
                    t_imaginary[j] = t[i];
                }

                tf = false;
            }
        }

        its.imaginary = atof(t_imaginary);
        its.real = atof(t);

        if ((y == 0 || (t[0] == '-' || t[0] == '+')) && t[x - 1] == 'i' && y < 2) {
            its.real = 0;
            its.imaginary = atof(t);
        }

        if (in.fail()) {
            in.clear(ios::failbit);
        }

        return in;
    }

    friend ostream& operator<<(ostream& out, Complex& its) {
        out << its.real << showpos << its.imaginary << noshowpos << 'i';

        return out;
    }

private:
    double real, imaginary;
};

int _tmain(int argc, _TCHAR* argv[]) {
    Complex my;
    Complex m1(4, 13);

    cout << "Enter complex(3+2i): " << endl;
    cin >> my;

    cout << "You wrtite next complex num: " << my << endl << "Complex with constructor inisilization: " << m1 << endl;

    system("pause");

    return 0;
}
