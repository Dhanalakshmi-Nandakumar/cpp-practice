#include <iostream>
#include <cstdlib>   // for malloc & free
using namespace std;

int* arr(int n) {
    int *p = (int*)malloc(n * sizeof(int));
    
    if (p == NULL) {   // check memory allocation
        cerr << "Memory allocation failed!\n";
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    return p;
}

int main() {
    int n = 5;
    int *ptr = arr(n);

    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }

    free(ptr);  // correct with malloc

    return 0;
}
