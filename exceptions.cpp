#include <bits/stdc++.h>
using namespace std;

int main() {
    // Example 1: Throw derived exception
    try {
        throw runtime_error("Runtime error occurred");
    }
    catch (const exception& e) {  // Catch by base class reference
        cout << "Caught derived exception: " << e.what() << endl;
    }

    // Example 2: Throw base exception
    try {
        throw exception();  // Base class object
    }
    catch (const exception& e) {
        cout << "Caught base exception: " << e.what() << endl;
    }

    // Example 3: Throw unknown type
    try {
        throw 42;  // Throwing an int, unknown exception type
    }
    catch (...) {  // Catch-all
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}
