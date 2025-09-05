#include <iostream>
using namespace std;

int main() {
    int a = 10;   // copy initialization
    int b{};      // uniform initialization (C++11)
    int c;        // uninitialized local variable

    cout << "value of a " << a
         << "  and value of b " << b
         << "  value of c produce error " << c;
    return 0;
}
