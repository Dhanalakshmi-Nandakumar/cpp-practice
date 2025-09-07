#include <iostream>
using namespace std;
//dont use call by ref for big program 
void swapByReference(int &a, int &b) { //formal parameter
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapByReference(x, y);//actual parameter
    cout << "After swapByReference: x=" << x << " y=" << y << endl;  //  swapped
    return 0;
}
