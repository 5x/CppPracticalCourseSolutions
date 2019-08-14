#pragma once

class IntegerSet {
public:
    IntegerSet();
    IntegerSet(int*, int n);
    void UnionOfSets(int*, int*);
    void intersectionOfSets(int*, int*);
    void insertElement(int);
    void deleteElement(int);
    void printSet();
    bool isEqualTo(int*);
    int* Get();
private:
    int mas[101];
};
