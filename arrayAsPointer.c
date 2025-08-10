#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("arr: %p\n", arr);
    printf("&arr[0]: %p\n", &arr[0]);
    printf("*arr: %d\n", *arr); //arr[0]= *(arr+0)
    printf("*(arr+2): %d\n", *(arr+2));  // same as arr[2]  *(1000+2*4)  =*(baseAddress+2*sizeof(int))
    
    return 0;
}

