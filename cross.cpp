#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>

using namespace std;


int STACK = 10, g_tick = 0, v_tick = 0;

void shuffle(int* mas, int n) {
    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        mas[j] ^= (mas[i] ^= (mas[j] ^= mas[i]));
    }
}

void view(char** board, int bn, int bm, char* name, bool mask) {
    if (name == "A") {
        for (int i = 0; i < bn; i++) {
            for (int j = 0; j < bm; j++) {
                cout << board[i][j];
            }

            cout << endl;
        }
    } else {
        ofstream file(name);

        if (!file.is_open()) {
            cout << "Can\'t open file for write." << endl;
            _getch();
            exit(1);
        }

        for (int i = 0; i < bn; i++) {
            for (int j = 0; j < bm; j++) {
                if (!mask) {
                    file << board[i][j];
                } else if (!(board[i][j] == ' ')) {
                    file << "*";
                } else {
                    file << " ";
                }

                file << endl;
            }
        }
    }
}

int len(char str[][60], int el_mas, int n) {
    for (int i = 0; i < n; i++) {
        if (strlen(str[i]) == el_mas) {
            return i;
        }
    }
}

bool diff(int df, int len, int s_pos_i, int s_pos_j, char** board, int bn, int bm, char* its) {
    bool vertical = true;
    bool gorizontal = true;
    int t_s_pos_i = s_pos_i - df;
    int t_s_pos_j = s_pos_j - df;

    if (s_pos_j - df + len + 1 < bm && t_s_pos_j > 0 && s_pos_i > 0 && (board[s_pos_i][t_s_pos_j + len] == ' ' && board[s_pos_i][t_s_pos_j - 1] == ' ')) {
        for (int i = 0; i < len && gorizontal; i++) {
            if (board[s_pos_i][t_s_pos_j + i] == ' ' || board[s_pos_i][t_s_pos_j + i] == its[i]) {
                if (i != df && !(board[s_pos_i + 1][t_s_pos_j + i] == ' ' && board[s_pos_i - 1][t_s_pos_j + i] == ' ')) {
                    gorizontal = false;
                }
            } else {
                gorizontal = false;
            }
        }
    } else {
        gorizontal = false;
    }

    if (s_pos_i - df + len + 1 < bn && t_s_pos_i > 0 && t_s_pos_j > 0 && (board[t_s_pos_i + len][s_pos_j] == ' ' && board[t_s_pos_i - 1][s_pos_j] == ' ')) {
        for (int i = 0; i < len && vertical; i++) {
            if (board[t_s_pos_i + i][s_pos_j] == ' ' || board[t_s_pos_i + i][s_pos_j] == its[i]) {
                if (i != df && !(board[t_s_pos_i + i][s_pos_j + 1] == ' ' && board[t_s_pos_i + i][s_pos_j - 1] == ' ')) {
                    vertical = false;
                }
            } else {
                vertical = false;
            }
        }
    } else {
        vertical = false;
    }

    if (vertical) {
        v_tick++;
    }

    if (gorizontal) {
        g_tick++;
    }

    if (vertical || gorizontal) {
        for (int j = 0; its[j] != NULL; j++) {
            if (vertical) {
                board[t_s_pos_i + j][s_pos_j] = its[j];
            } else {
                board[s_pos_i][t_s_pos_j + j] = its[j];
            }
        }

        return true;
    }

    return false;
}

bool has_some_not_nulls(int* mas, int n) {
    for (int j = 0; j < n; j++) {
        if (mas[j] != 0) {
            return true;
        }
    }

    return false;
}

void to_board(int n, int* mas, char str[][60], char** board, int bn, int bm) {
    int t;
    bool t_diff = false;

    for (int i = 0; i < n; i++) {
        t = len(str, mas[i], n);

        if (mas[i] != 0 && str[t] != NULL) {
            for (int j = 0; j < mas[i]; j++) {
                for (int i_board = 0; i_board < bn; i_board++) {
                    for (int j_board = 0; j_board < bm; j_board++) {
                        if (board[i_board][j_board] == str[t][j]) {
                            t_diff = diff(j, mas[i], i_board, j_board, board, bn, bm, str[t]);

                            if (t_diff) {
                                str[t][0] = NULL;
                                mas[i] = 0;

                                j_board = bm;
                                i_board = bn;
                                j = 5000;
                            }
                        }
                    }
                }
            }
        }
    }

    if (has_some_not_nulls(mas, n) && STACK > 0) {
        STACK--;
        to_board(n, mas, str, board, bn, bm);
    }
}

int _tmain(int argc, _TCHAR* argv[]) {
    setlocale(0, "Russian");
    srand((unsigned)time(NULL));

    int const maxn = 250;
    int n = 0, bn, bm, max = 0;
    char temp[60];
    char str[maxn][60];

    cout << "Input filename: ";
    cin.getline(temp, sizeof(temp));

    ifstream file(temp);
    if (file.fail()) {
        cout << "Error, can\'t read from file." << endl;
        _getch();
        exit(1);
    }

    while ((!file.eof()) && (!file.fail())) {
        file.getline(temp, sizeof(temp));

        if (strlen(temp) > 2) {
            n++;
        }
    }

    if (n < 2) {
        cout << "Not enough words to continue." << endl;
        _getch();
        return 0;
    }

    if (n > maxn) {
        cout << "Limit error!" << endl << "Change restrics, or use less words!" << endl;
        _getch();
        return 0;
    }

    file.clear();
    file.seekg(0);

    for (int i = 0; !file.eof() && !file.fail(); i++) {
        file.getline(temp, sizeof(temp));

        if (strlen(temp) > 2) {
            _strupr_s(temp);
            strcpy_s(str[i], temp);
        }
    }

    file.close();

    cout << "Height size: ";
    cin.getline(temp, sizeof(temp));
    bn = atoi(temp);

    cout << "Width size: ";
    cin.getline(temp, sizeof(temp));
    bm = atoi(temp);

    char** board = new char* [bn];
    for (int i = 0; i < bn; i++) {
        board[i] = new char[bm];

        for (int j = 0; j < bm; j++) {
            board[i][j] = ' ';
        }
    }

    int* mas = new int[n];
    for (int i = 0; i < n; i++) {
        mas[i] = strlen(str[i]);
    }

    for (int i = 0; i < n; i++) {
        if (mas[i] > max) {
            max = mas[i];
        }
    }

    if (max >= bn / 2 || max >= bm / 2) {
        cout << "Erorr, so small size for some words.";
        _getch();

        return 0;
    }

    shuffle(mas, n);
    int first = rand() % n;
    int gorv = rand() % 2;
    int t = len(str, mas[first], n);

    if (gorv == 0) {
        g_tick++;
    } else {
        v_tick++;
    }

    for (int j = 0; j < mas[first]; j++) {
        if (gorv == 0) {
            board[bn / 2][(bm - mas[first]) / 2 + j] = str[t][j];
        } else {
            board[(bn - mas[first]) / 2 + j][bm / 2] = str[t][j];
        }
    }

    str[t][0] = NULL;
    mas[first] = 0;

    to_board(n, mas, str, board, bn, bm);
    view(board, bn, bm, "A", false);

    cout << "Words used: " << g_tick + v_tick << "/" << n << endl
        << "On horizontal: " << g_tick << endl << "On vertical: " << v_tick << endl;

    cout << "Save cross result & mask?(y/n): ";
    cin.getline(temp, sizeof(temp));

    if (temp[0] == 'Y' || temp[0] == 'y' || temp[0] == '1') {
        cout << "Filename(*.txt): ";
        cin.getline(temp, sizeof(temp));

        view(board, bn, bm, temp, false);
        view(board, bn, bm, "mask.txt", true);

        cout << "Successful saved." << endl;
    }

    _getch();

    return 0;
}
