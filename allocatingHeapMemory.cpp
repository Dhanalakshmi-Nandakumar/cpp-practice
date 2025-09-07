#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
int *b;
b = new int[5];   //  allocates array of 5 ints on heap

// assign values
for (int i = 0; i < 5; i++) {
    b[i] = i * 10;   // use like normal array
}

// print values
for (int i = 0; i < 5; i++) {
    cout << b[i] << " ";
}

delete[] b;  //  must use delete[] for arrays

    return 0;
}