#include <iostream>
using namespace std;
//we cannot use cin and cout and unknwn boundaries in loop , and dynamic allocation (constexpr runs at compile time-it should know the value at compile time)
constexpr int square(int x) {
    return x * x;   // must be something valid at compile time
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    // Works as a normal function at runtime
    cout << "Square of " << num << " is " << square(num) << endl;

    // Also works at compile time
    int sq_num=12; 
    cout << "Square of 12 (compile-time) is " << square(sq_num)<< endl;

    return 0;
}

//note

// const int x = getUserInput();  // OK (runtime constant) , it is  fixed
// constexpr int y = 10;          // OK (compile-time constant)
// constexpr int z = x;           // Error (x not known at compile-time)
