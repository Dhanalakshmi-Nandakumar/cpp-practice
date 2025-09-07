#include <iostream>
using namespace std;
//call by address
void swapByAddress(int *a, int &b) {
    int temp = *a;
    *a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "before swapByAddress: x=" << x << " y=" << y << endl;  //  swapped
    swapByAddress(&x, y);
    cout << "After swapByAddress: x=" << x << " y=" << y << endl;  //  swapped
    return 0;
}
