#include <stdio.h>

// Function that takes array as argument
void foo(int (*arr)[5]) {
    printf("%lu ", sizeof(*arr));
}

int main() {
    int arr[5];

    // Passing the address of arr
    foo(&arr);

    return 0;
}