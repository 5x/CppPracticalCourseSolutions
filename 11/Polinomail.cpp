#include "stdafx.h"
#include "Polinomial.h"

Polinomail::Polinomail() {
    val = 0;
}

Polinomail::Polinomail(int n) {
    val = n;
}

Polinomail::Polinomail(int* mas) {
    if (mas[1] == 0) {
        val = 1;
    } else {
        val = mas[0];

        for (mas[1]; mas[1] > 1; mas[1]--) {
            val *= mas[0];
        }
    }
}

int Polinomail::getVal() {
    return val;
}

Polinomail& Polinomail::operator=(Polinomail& next) {
    val = next.getVal();

    return *this;
}

Polinomail Polinomail::operator+(Polinomail& next) {
    return val + next.getVal();
}

Polinomail Polinomail::operator-(Polinomail& next) {
    return val - next.getVal();
}

Polinomail Polinomail::operator*(Polinomail& next) {
    return val * next.getVal();
}

Polinomail Polinomail::operator+=(Polinomail& next) {
    return val += next.getVal();
}

Polinomail Polinomail::operator-=(Polinomail& next) {
    return val -= next.getVal();
}

Polinomail Polinomail::operator*=(Polinomail& next) {
    return val *= next.getVal();
}

std::ostream& operator<<(std::ostream& output, const Polinomail& num) {
    return output << num.val;
}
