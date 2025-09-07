#include <iostream>
using namespace std;

struct square
{
    int l, b;
};

void fun(struct square *s2)
{
    s2->l = 9000; // this will modify the actual struct in heap
    cout << "inside function l value is " << s2->l << endl;
}

int main()
{
    // allocate memory for struct on heap
    struct square *s1 = new square;  //always allocate memory b4 dereference it

    s1->l = 12;
    s1->b = 102;

    cout << "main fn l value is " << s1->l << endl;

    fun(s1); // pass pointer directly

    cout << "outside function l value is " << s1->l << endl;

    delete s1; // free heap memory
    return 0;
}
