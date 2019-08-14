#include "stdafx.h"
#include "IntegerSet.h"
#include <iostream>

using namespace std;


IntegerSet::IntegerSet() {
    for (int i = 0; i < 101; i++) {
        mas[i] = 0;
    }
}

IntegerSet::IntegerSet(int* ip, int n) {
    for (int i = 0; i < n; i++) {
        mas[ip[i]] = 1;
    }
}

int* IntegerSet::Get() {
    return mas;
}

void IntegerSet::insertElement(int k) {
    mas[k] = 1;
}

void IntegerSet::deleteElement(int m) {
    mas[m] = 0;
}

void IntegerSet::UnionOfSets(int* next, int* prev) {
    for (int i = 0; i < 101; i++) {
        if (next[i] == 1 || prev[i] == 1) {
            mas[i] = 1
        } else {
            mas[i] = 0;
        }
    }
}

void IntegerSet::intersectionOfSets(int* next, int* prev) {
    for (int i = 0; i < 101; i++) {
        if (next[i] == prev[i] == 1) {
            mas[i] = 1
        } else {
            mas[i] = 0;
        }
    }
}

bool IntegerSet::isEqualTo(int* vs) {
    for (int i = 0; i < 101; i++) {
        if (vs[i] != mas[i]) {
            return false;
        }
    }

    return true;
}

void IntegerSet::printSet() {
    bool p = false;

    for (int i = 0; i < 101; i++) {
        if (mas[i] == 1) {
            cout << i << " ";
            p = true;
        }
    }

    cout << (!p ? "---\n" : "\n");
}
