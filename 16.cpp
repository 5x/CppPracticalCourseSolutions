#include "stdafx.h"
#include <iostream>

using namespace std;

class f {
public:
    f(char* p) :t(p) {
    }
    void view() {
        cout << t;
    }
private:
    char* t;
};

void f4() {
    throw f("here");
}

void f3() {
    f4();
}

void f2() {
    f3();
}

void f1() {
    f2();
}

int _tmain(int argc, _TCHAR* argv[]) {
    try {
        f1();
    } catch (f& t) {
        cerr << "Congratulations you are ";
        t.view();
        cerr << " xD\n";
    }

    system("pause");

    return 0;
}
