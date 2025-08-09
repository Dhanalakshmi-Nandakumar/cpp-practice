#include <stdio.h>

int main() {
    int a = 10;
    void *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);  // where a is stored
    printf("Value in pointer p: %p\n", *(int*)ptr);  // same as &a
    printf("Address of pointer p: %d\n", *(int*)&ptr);  // where p itself is stored

    return 0;
}
