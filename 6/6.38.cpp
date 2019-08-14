#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


bool play();

void next_move(int n, int NUM) {
    char t[10];

    if (n == NUM) {
        cout << "Excellent! You guessed the number!" << endl
            << "Want to play (Yes / No)?" << endl;
        cin >> t;

        if (t[0] == 'Y' || t[0] == 'y' || t[0] == '1') {
            cout << endl;
            play();
        } else {
            exit(1);
        }
    } else {
        if (n < NUM) {
            cout << "Too small. Try again" << endl;
        } else {
            cout << "Too many. Try again" << endl;
        }

        cin >> n;

        next_move(n, NUM);
    }
}

bool play() {
    int NUM = 1 + rand() % 1000, n;

    cout << "My number between 1 and 1000" << endl
        << "You can guess it? Please type your first guess: ";

    cin >> n;

    next_move(n, NUM);

    return play();
}

int _tmain(int argc, _TCHAR* argv[]) {
    play();

    return 0;
}
