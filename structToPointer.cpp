#include <bits/stdc++.h>
using namespace std;

struct employee {
    int salary, age;
    string name = "sathya";   
};

int main() {
    employee* dptr = new employee;  // C++ allocation

    dptr->salary = 2000;
    dptr->age = 22;

    cout << dptr->salary << endl;
    cout << dptr->name << endl;

    delete dptr;  // free memory
    return 0;
}
