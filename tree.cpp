#include "stdafx.h"
#include <iostream>

using namespace std;


struct Tree {
    int x;
    Tree* l, * r;

    Tree(char _x) : x(_x), l(NULL), r(NULL) {
    }

    Tree(char _x, Tree* left, Tree* right) : x(_x), l(left), r(right) {
    }
};

void sumTreeNodeValues(Tree*& tree, int& S) {
    if (tree == NULL) {
        return;
    }

    S += (tree->x);

    cout << tree->x << endl;

    sumTreeNodeValues(tree->l, S);
    sumTreeNodeValues(tree->r, S);
}

int main(int argc, _TCHAR* argv[]) {
    /* Example of tree
    #				   1				#
    #				  / \				#
    #			 2			3			#
    #		    / \		   / \			#
    #		 4       5    6   7			#
    #		/ \     / \					#
    #		8 9    10 11				#
    # Expected result: 66		       */

    Tree* f8 = new Tree(8);
    Tree* f9 = new Tree(9);
    Tree* f4 = new Tree(4, f8, f9);
    Tree* f10 = new Tree(10);
    Tree* f11 = new Tree(11);
    Tree* f5 = new Tree(5, f10, f11);
    Tree* f2 = new Tree(2, f4, f5);
    Tree* f6 = new Tree(6);
    Tree* f7 = new Tree(7);
    Tree* f3 = new Tree(3, f6, f7);
    Tree* f1 = new Tree(1, f2, f3);

    int S = 0;
    sumTreeNodeValues(f1, S);

    cout << endl << "Sum of all tree elements: " << S << endl;

    cin.get();

    return 0;
}
