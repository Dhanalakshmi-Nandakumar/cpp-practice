#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};  // Array declaration
    int *ptr = arr;  //&arr           // Pointer to array

    printf("Initial state:\n");
    printf("arr[0] = %d at address %p\n", arr[0], arr);
    printf("ptr points to %d at address %p\n\n", *ptr, ptr);

    // 1. Pointer arithmetic WORKS with pointer variables
    printf("Pointer arithmetic with ptr:\n");
    ptr++;  // Valid: Move pointer to next element
    printf("After ptr++:\n");
    printf("ptr now points to %d at address %p\n", *ptr, ptr);
    printf("This is arr[1] = %d\n\n", arr[1]);

    // 2. Pointer arithmetic FAILS with array name
    printf("Attempting pointer arithmetic with arr:\n");
    arr++;  // since arr is constant , we cannot change the address so trying to change the memory of arr gives error

    // 3. Alternative way to access array elements (works but doesn't modify arr)
    printf("Using arr + 1 (doesn't modify arr):\n");
    printf("%p\n Address of ",&arr[1]);
    printf("%p",arr+1);
    // printf("*(arr + 1) = %d (same as arr[1])\n", *(arr + 1));
    // printf("But arr itself is still %p (unchanged)\n", arr);

    return 0;
}