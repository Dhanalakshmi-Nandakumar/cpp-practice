#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        // Trying to allocate an extremely large block of memory
        // If allocation fails, the 'new' operator throws a temporary object of type bad_alloc
        int* bigArray = new int[100000000000000];  
        
    } catch (const bad_alloc& e) {  
        // bad_alloc is a standard exception class derived from std::exception
        // "e" is a reference variable referring to the thrown bad_alloc object
        cout << "Caught bad_alloc: " << e.what();
    }

    return 0;
}
