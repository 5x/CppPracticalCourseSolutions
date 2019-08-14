#include "stdafx.h"
#include "IntegerSet.h"
#include <iostream>


using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
    int mas[9] = { 1, 3, 5, 7, 9, 11, 13, 15, 17 }
    int arr[20] = { 99, 88, 77, 66, 55, 44, 33, 22, 11, 0, 38, 50, 24, 62, 64, 17, 100, 75, 36, 83 };

    IntegerSet c1(mas, 9);
    IntegerSet c2(mas, 7);
    IntegerSet c3;

    cout << "Create obj(c1,c2,c3), print contents:" << endl;

    c1.printSet();
    c2.printSet();
    c3.printSet();

    cout << "Eval obj c1 vs c2:" << endl;
    cout << (c1.isEqualTo(c2.Get()) ? "c1==c2" : "c1!=c2") << endl;

    cout << "Add 2 elements to c2:" << endl;
    c2.insertElement(mas[7]);
    c2.insertElement(mas[8]);
    c2.printSet();

    cout << "Eval obj c1 vs c2:" << endl;
    cout << (c1.isEqualTo(c2.Get()) ? "c1==c2" : "c1!=c2") << endl;

    cout << "Delete k(3) element from c1:" << endl;
    c1.deleteElement(3);
    c1.printSet();

    cout << "Inisilizate c3" << endl;
    c3.IntegerSet::IntegerSet(arr, 20);
    c3.printSet();

    cout << "Unification c3 vs c2 to c1 - metod <or>" << endl;
    c1.UnionOfSets(c3.Get(), c2.Get());
    c1.printSet();

    cout << "Unification c3 vs c2 to c1 - metod <and>" << endl;
    c1.intersectionOfSets(c3.Get(), c2.Get());
    c1.printSet();

    cin.get();
    return 0;
}
