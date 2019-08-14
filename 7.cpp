#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;


void bucketSort(int* mas, int n, int max) {
    int* arr = new int[max];
    int p = 0;
    int i;
    int j;

    for (i = 0; i < max; i++) {
        arr[i] = 0;
    }

    for (i = 0; i < n; i++) {
        arr[mas[i]] += 1;
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < arr[i]; j++) {
            mas[j + p] = i;
        }

        p += arr[i];
    }

    delete[]arr;
}

int _tmain(int argc, _TCHAR* argv[]) {
    srand(time(NULL));

    int i, n, max = 101;

    cout << "Array size: ";
    cin >> n;

    int* mas = new int[n];
    for (i = 0; i < n; i++) {
        mas[i] = rand() % max;
    }

    for (i = 0; i < n; i++) {
        cout << mas[i] << "  ";
    }

    bucketSort(mas, n, max);

    cout << endl << "---------AFTER SORT---------" << endl;

    for (i = 0; i < n; i++) {
        cout << mas[i] << "  ";
    }

    delete[]mas;

    _getch();
    return 0;
}
