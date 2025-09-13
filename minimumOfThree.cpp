#include <iostream>
using namespace std;

// Min of 2 integers
int Min(int a, int b) {
    return (a < b) ? a : b;
}

// Min of 3 integers
int Min(int a, int b, int c) {  //10 1 2
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c); 
} 

// Min of 2 floats
float Min(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    cout << "Min of 10, 5 = " << Min(10, 5) << endl;
    cout << "Min of 12, 7, 9 = " << Min(12, 7, 9) << endl;
    cout << "Min of 18.0, 9.0 = " << Min(18.0f, 9.0f) << endl;
    return 0;
}
