#include <bits/stdc++.h>
using namespace std;

// swap the pointers themselves (reference to pointer)
void swapPointers(int*& a, int*& b) {
    int* temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    int* ptr1 = &x;
    int* ptr2 = &y;

    cout << "Before swapping:" << endl;
    cout << "ptr1 points to: " << *ptr1 << " (address " << ptr1 << ")" << endl;
    cout << "ptr2 points to: " << *ptr2 << " (address " << ptr2 << ")" << endl;

    swapPointers(ptr1, ptr2);   // swapping the pointers themselves

    cout << "\nAfter swapping:" << endl;
    cout << "ptr1 points to: " << *ptr1 << " (address " << ptr1 << ")" << endl;
    cout << "ptr2 points to: " << *ptr2 << " (address " << ptr2 << ")" << endl;

    return 0;
}
