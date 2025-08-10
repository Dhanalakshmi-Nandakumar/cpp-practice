#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var; //10
    int **pptr = &ptr;
    
    printf("var: %d\n", var);
    printf("*ptr: %d\n", *ptr);
    printf("**pptr: %d\n", **pptr);
    
    // Changing value through double pointer
    **pptr = 20;
    printf("After change, var: %d\n", var);
    
    return 0;
}

