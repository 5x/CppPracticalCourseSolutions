#include "stdafx.h"
#include <iostream>

using namespace std;


class it {
public:
    it(int t) {
        n = t;
    }

    virtual int get() {
        return n;
    }

private:
    int n;
};

class Virtual1 :virtual public it {
public:
    Virtual1() :it(0) {
    }
};

class Virtual2 :virtual public it {
public:
    Virtual2() :it(1) {
    }
};

class its :public Virtual1, Virtual2 {
public:
    its(int a) :it(a) {
    }
};

int _tmain(int argc, _TCHAR* argv[]) {
    int t;

    cout << "Enter a number: ";
    cin >> t;

    its my(t);

    cout << "You number is: " << my.get() << endl;

    system("pause");

    return 0;
}
