#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *p[10];  // Array of 10 int pointers
    
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    p[3] = NULL;  // Others uninitialized
    
    printf("p[0] = %p → %d\n", (void*)p[0], *p[0]);
    printf("p[1] = %p → %d\n", (void*)p[1], *p[1]);
    printf("p[2] = %p → %d\n", (void*)p[2], *p[2]);
    
    return 0;
}