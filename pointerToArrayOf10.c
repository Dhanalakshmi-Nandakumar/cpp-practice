#include <stdio.h>

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*p)[10];  // Pointer to array of 10 ints
    
    p = &arr;  // Points to entire array
    
    // Access elements
    printf("First element: %d  %d\n", (*p)[0],p[0][0]); //p[0][0]
    printf("Fifth element: %d  %d\n", (*p)[4], p[0][4]);
    
    // Pointer arithmetic jumps by 10 ints!
    printf("p = %p\n", (void*)p);
    printf("p + 1 = %p (jumps 40 bytes)\n", (void*)(p + 1));
    
    return 0;
}