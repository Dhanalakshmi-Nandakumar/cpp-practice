#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    int (*q)[3] = arr;  // q is a pointer to an array of 3 ints (points to row 0)

    cout << "q       = " << q << endl;       // Address of row 0
    cout << "q + 1   = " << (q + 1) << endl; // Address of row 1 (12 bytes ahead if int=4)
    cout << "*q      = " << *q << endl;      // Same as &arr[0][0]
    cout << "(*q)[0] = " << (*q)[0] << endl; // 1 (first element of row 0)
    cout << "(*q)[2] = " << (*q)[2] << endl; // 3 (third element of row 0)

    // Move q to next row
    q = q + 1;
    cout << "(*q)[0] = " << (*q)[0] << endl; // 4 (first element of row 1)

    cout<<(*q)[3];
    cout<<endl<<arr;

    return 0;
}
