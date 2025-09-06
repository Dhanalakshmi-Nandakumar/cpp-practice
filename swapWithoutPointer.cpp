#include <bits/stdc++.h>
using namespace std;

// using reference parameters
void swapPointers(int &a, int &b) {
    int temp = a;  
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapPointers(a, b);   // no need for &a, &b here

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
