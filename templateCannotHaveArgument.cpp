#include <iostream>
using namespace std;

//  Not allowed: template + default argument
// template <class T>
// T add(T a=9, T b = 5) { return a + b; }

//  Normal function with default argument
int add(int a=9, int b = 5) {
    return a + b;
}

int main() {
    cout << add() << endl;    // uses default b = 5 → 15
    cout << add(10, 20) << endl; // overrides default → 30
}
