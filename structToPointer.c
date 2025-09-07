#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

struct employee {
    int salary, age;
    char name[7];   // only declared, no initialization here
};

int main() {
    struct employee *dptr;
    dptr = (struct employee*)malloc(sizeof(struct employee));

    dptr->salary = 2000;
    dptr->age = 22;
    strcpy(dptr->name, "sathyabam");   // initialize 

    cout << dptr->salary << endl;
    cout << dptr->name << endl;

    free(dptr);  // don’t forget to free
    return 0;
}
