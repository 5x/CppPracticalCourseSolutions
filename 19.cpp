#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


void QuickSort(int* mas, int start, int end) {
    int i = start;
    int j = end;
    int x = mas[(start + end) / 2];

    do {
        while (mas[i] < x) {
            ++i;
        }

        while (mas[j] > x) {
            --j;
        }

        if (i <= j) {
            if (i != j) {
                mas[j] ^= (mas[i] ^= (mas[j] ^= mas[i]));
            }

            i++;
            j--;
        }
    } while (i < j);

    if (start < j) {
        QuickSort(mas, start, j);
    }

    if (i < end) {
        QuickSort(mas, i, end);
    }
}

void view(int* mas, int size) {
    for (int i = 0; i < size; i++) {
        cout << mas[i] << "  ";
    }
}

int _tmain(int argc, _TCHAR* argv[]) {
    srand((unsigned)time(NULL));

    int size;
    int max = 101;

    cout << "Enter size of mas: ";
    cin >> size;

    int* mas = new int[size];
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % max;
    }

    view(mas, size);
    QuickSort(mas, 0, size - 1);

    cout << endl << "----REZULT----" << endl;

    view(mas, size);
    cout << endl;

    system("pause");

    return 0;
}
