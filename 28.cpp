#include "stdafx.h"
#include <iostream>

using namespace std;

#define SUMARRAY(mas,size) for(;size>0;size--) sum+=mas[size-1];

int _tmain(int argc, _TCHAR* argv[]) {
    int size, sum = 0;

    cout << "Type size of mas: ";
    cin >> size;

    int* mas = new int[size];
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 11;
        cout << mas[i] << "  ";
    }

    SUMARRAY(mas, size);

    cout << endl << "Sum of number: " << sum << endl;

    system("pause");

    return 0;
}
