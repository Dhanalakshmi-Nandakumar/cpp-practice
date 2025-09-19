#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        
        int* bigArray = new int[100000000000000];  //here If allocation fails, new automatically throws a std::bad_alloc exception.
        
    } catch (const bad_alloc& e) {
        cout << "Caught bad_alloc: " << e.what();
    }

    return 0;
}