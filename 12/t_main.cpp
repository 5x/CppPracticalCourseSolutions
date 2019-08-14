#include "stdafx.h"
#include <iostream>
#include "Account.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
    cout << "class: Account." << endl << "Creating obj1. Set balance 300$. Display balance." << endl;
    Account obj1(300);
    obj1.display();

    cout << "Credit 100$ to obj1" << endl;
    obj1.credit(100);
    obj1.display();

    cout << "Debit 381$ from obj1" << endl;
    obj1.debit(381);
    obj1.display();

    cout << "Debit 20$ from obj1" << endl;
    obj1.debit(20);
    obj1.display();

    cout << endl << "class: SavingAccount" << endl << "Creating obj2. Set balance 385.25$. Set rate - 5%" << endl;
    SavingAccount obj2(385.25, 0.05);
    obj2.display();

    cout << "Credit 100$ to obj2" << endl;
    obj2.credit(100);
    obj2.display();

    cout << "Debit 381$ from obj2" << endl;
    obj2.debit(381);
    obj2.display();

    cout << "canculateInterest: " << obj2.canculateInterest() << endl;
    cout << "Add canculateInterest to obj2";
    obj2.credit(obj2.canculateInterest());
    obj2.display();

    cout << endl << "class: CheckingAccount" << endl << "Creating obj3. Set balance 12530.1$. transaction Cost 250$" << endl;
    CheckingAccount obj3(12530.1, 250);
    obj3.display();

    cout << "Debit 12000$ from obj3" << endl;
    obj3.debit(12000);
    obj3.display();

    cout << "Credit 50$ to obj3" << endl;
    obj3.credit(50);
    obj3.display();

    cout << "Debit 12000$ from obj3" << endl;
    obj3.debit(12000);
    obj3.display();

    system("pause");

    return 0;
}
