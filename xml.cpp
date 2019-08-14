#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;


int mod(int num) {
    return num >= 0 ? num : num * -1;
}

bool is_single_closed_tag(const char* n) {
    return n[strlen(n) - 1] == '/';
}

bool is_single_tag(char& n) {
    char a[17][13] = { "!--Comment--","img","br","hr","input","link",
                    "meta","area","param","colgroup","base","col",
                    "embed","wbr","frame","source","!--[SOME]--" };

    for (int i = 0; i < 17; i++) {
        if (strcmp(a[i], &n) == 0) {
            return false;
        }
    }

    return is_single_closed_tag(&n);
}

//NOTE: IN INPUT FILE ON 1 LINE WRITE DOCTYPE OR SOME CONSTRUCTION DTD;

int _tmain(int argc, _TCHAR* argv[]) {
    setlocale(0, "Russian");

    const int n = 200;
    const int max_level = 100;
    char buffer[300000];
    char token_buffer[5000];
    char tag[n][30] = { NULL };
    char filename[60];
    char temp_filename[] = "temp.txt";
    char result_filename[] = "result.txt";

    int level = 0, dr = 0, x = 0;
    long int z = 0;
    short int counter[max_level] = { 0 };

    bool is_end = false;
    bool checked = false;
    bool tf;

    cout << "Type input filename (index.html): ";
    cin.getline(filename, sizeof(filename));

    rename(filename, temp_filename);

    ifstream file(temp_filename);

    if (file.fail()) {
        cout << "File[\"" << filename << "\"] not found, or temp file [\""
            << temp_filename << "\"] can\'t be created." << endl;

        system("pause");
        exit(1);
    }

    ofstream result_stream(result_filename);
    if (!result_stream.is_open()) {
        cout << "Can\'t open file for write..." << endl;
        return 0;
    }

    while (!file.eof() && !file.fail()) {
        file.getline(buffer, sizeof(buffer));

        for (int i = 0; buffer[i] != NULL; i++) {
            if (buffer[i] == '<') {
                if (buffer[i + 2] == '-') {
                    result_stream << "<!--Comment-->";
                } else {
                    if (buffer[i + 2] == '[') {
                        result_stream << "<!--[SOME]-->";
                    } else {
                        for (; !(buffer[i] == '>' || (buffer[i] == '/' && buffer[i + 1] == '>')) && buffer[i] != NULL; i++) {
                            if (buffer[i] == ' ') {
                                buffer[i + 1] = '>';
                            } else {
                                result_stream << buffer[i];
                            }
                        }

                        result_stream << '>';
                    }
                }
            }
        }
    }

    result_stream.close();
    file.close();

    rename(temp_filename, filename);

    ifstream Rez(result_filename);

    if (Rez.fail()) {
        cout << "File[\"" << result_filename << "\"] can\'t be open!" << endl;

        system("pause");
        exit(1);
    }

    Rez.getline(buffer, sizeof(buffer));
    for (int i = 0; buffer[i] != NULL; i++) {
        if (buffer[i] == '>') {
            z++;
        }
    }

    Rez.close();
    short int* mas = new short int[z];

    for (int j = 0; buffer[j] != NULL; j++) {
        token_buffer[0] = NULL;
        tf = false;

        if (buffer[j] == '<') {
            if (buffer[j + 1] == '/') {
                tf = true;
                j++;
            }

            for (; !(buffer[j + 1] == '>'); j++) {
                token_buffer[dr] = buffer[j + 1];
                dr++;
                token_buffer[dr] = NULL;
            }

            dr = 0;
            for (short y = 0; y < n; y++) {
                if (tag[y][0] == NULL) {
                    strcpy_s(tag[y], token_buffer);
                    mas[x] = y;
                    y = n;
                } else if (strcmp(tag[y], token_buffer) == 0) {
                    mas[x] = y;
                    y = n;
                }
            }

            if (tf) {
                mas[x] *= -1;
            }

            x++;
        }
    }

    ofstream out(result_filename);
    dr = 0;

    if (!out.is_open()) {
        cout << "Can\'t open file for write..." << endl;
        system("pause");
        exit(1);
    }

    for (int i = 0; i < z; i++) {
        if (is_end) {
            for (int j = 0; j < level; j++) {
                out << "  ";
            }
        }

        out << (mas[i] >= 0 ? "<" : "</") << tag[mod(mas[i])] << ">";
        checked = is_single_tag(*tag[mas[i]]);

        if ((!is_end && mas[i + 1] < 0) || !checked || (i > 0 && mas[i] < 0 && mas[i + 1] < 0)) {
            level--;
        }

        if (!(mas[i] == mod(mas[i + 1]) && mas[i] != mas[i + 1]) || !checked) {
            if (mas[i] > 0 && mas[i + 1] > 0) {
                level++;
            }

            if (level >= 0) {
                out << endl << level << ":";

                if (mas[i + 1] >= 0) {
                    counter[level]++;
                }
            }

            is_end = true;
        } else {
            is_end = false;
        }

        if (mas[i] < 0) {
            dr++;
        }
    }

    cout << "Result saved to [\"" << result_filename << "\"]." << endl;
    out.close();

    if (level != -1) {
        cout << "Source file contains unclosed tags or script with, "
            "script with \'>\' symbol" << endl;
    }

    cout << "The following items were found in the source file:" << endl;
    for (x = 0; tag[x][0] != NULL; x++) {
        cout << tag[x] << "  ";
    }

    cout << endl << "Elements at each level:" << endl;

    for (int i = 0; i < max_level && counter[i] != 0; i++) {
        cout << i << (i < 10 ? "  " : i < 100 ? " " : "") << ":  " << counter[i] << endl;
    }

    cout << "Total number of node found: " << z << endl;
    z--;
    cout << "Total tags found: " << z - dr << endl;
    cout << "Number of single tags: " << z - dr * 2 << endl;
    cout << "Number of paired tags: " << dr << endl;
    cout << "Display usage count of each tag?(y/n): ";

    cin.getline(token_buffer, sizeof(token_buffer));
    if (token_buffer[0] == 'y' || token_buffer[0] == 'Y' || token_buffer[0] == '1') {
        int* tag_of = new int[x];

        for (int i = 0; i < x; i++) {
            tag_of[i] = 0;
        }

        cout << "Tag" << "\t\tNum of usage" << endl;
        for (int i = 0; i < z; i++) {
            if (mas[i] >= 0) {
                tag_of[mas[i]]++;
            }
        }

        for (int i = 0, j = 0; i < x; i++) {
            cout << tag[i];
            j = 16 - strlen(tag[i]);

            for (; j > 0; --j) {
                cout << ' ';
            }

            j = 0;
            cout << tag_of[i] << endl;
        }
    }

    delete[]mas;

    system("pause");

    return 0;
}
