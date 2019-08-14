#pragma once
#include <iostream>

class Polinomail {
    friend std::ostream& operator<<(std::ostream&, const Polinomail& num);
public:
    Polinomail();
    Polinomail(int*);
    Polinomail(int);
    int getVal();
    Polinomail& operator=(Polinomail& next);
    Polinomail operator+(Polinomail& next);
    Polinomail operator-(Polinomail& next);
    Polinomail operator*(Polinomail& next);
    Polinomail operator+=(Polinomail& next);
    Polinomail operator-=(Polinomail& next);
    Polinomail operator*=(Polinomail& next);
    ~Polinomail() {
    }
private:
    int val;
};
