#include <bits/stdc++.h>
#include <exception>
using namespace std;

int main() {
    int a = 7, b = 10;

    try {
        // Outer try: division
        if (b == 0)
            throw runtime_error("Division by zero");  // specific exception

        cout << "Result: " << a / b << endl;

        // nested try- memory allocation
        try {
            int* arr = new int[200000000000000];  //  huge
            delete[] arr; //if allocate manually delete memory on heap
        }
        catch (const bad_alloc& e) {
            cout << "Memory allocation failed: " << e.what() << endl;
        }

    }
    catch (const exception& e) {  // catches both runtime_error or base exception
        cout << "Outer exception caught: " << e.what() << endl;
    }

    cout << "\nProgram ended normally." << endl;

    return 0;
}
