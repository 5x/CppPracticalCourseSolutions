#include "stdafx.h"
#include <iostream>
#include "Polinomial.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
    int mas[2] = { 2, 4 };
    int mas2[2] = { 3, 3 };
    int mas3[2] = { 2, 6 };

    Polinomail obj1(mas);
    Polinomail obj2(mas2);
    Polinomail obj3(mas3);
    Polinomail obj4;

    cout << "obj1=" << obj1 << " obj2=" << obj2 << " obj3=" << obj3 << " obj4=" << obj4 << endl;

    cout << "obj4=obj1+obj2+obj3: ";
    obj4 = obj1 + obj2 + obj3;

    cout << obj1 << "+" << obj2 << "+" << obj3 << "=" << obj4 << " == " << obj1 + obj2 + obj3 << endl;
    cout << "obj3=obj1-obj2: ";
    obj3 = obj1 - obj2;

    cout << obj2 << "-" << obj1 << "=" << obj3 << endl;
    cout << "obj4+=obj1: ";
    obj4 += obj1;
    cout << obj4 << endl;

    cout << "obj3=obj4*obj3: ";
    obj3 = obj4 * obj3;
    cout << obj3 << endl;

    cout << "obj1*=obj4: ";
    obj1 *= obj4;
    cout << obj1 << endl;

    cout << "obj1-=obj4: ";
    obj1 -= obj4;
    cout << obj1 << endl;

    cout << "obj1+=obj3: ";
    obj1 -= obj3;
    cout << obj1 << endl;

    cout << "obj3=obj1: ";
    obj3 = obj1;
    cout << obj3 << endl;

    system("pause");

    return 0;
}