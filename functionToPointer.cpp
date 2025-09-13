#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    int (*operation)(int, int);  // function pointer

    operation = add;
    cout << "10 + 5 = " << (*operation)(10, 5) << endl;

    operation = sub;
    cout << "10 - 5 = " << operation(10, 5) << endl;

    return 0;
}
