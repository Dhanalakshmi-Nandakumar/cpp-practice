#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Create a pointer to integer
    int *p;

    // Pointer to an array of 5 integers
    int(*ptr)[5];

    // Points to 0th element of the arr
    p = arr;

    // Points to the whole array arr
    ptr = &arr;
  
  	printf("p = %p\n", p); //address of first element
  	printf("*ptr = %p\n\n", *ptr); //1st element
  
  	// incrementing both pointers
    p++; //p->2
    ptr++;//array out of bound
    printf("p = %d\n", *p);//2
    printf("*ptr = %p", &arr[4]);//last memory address 
  	printf("*ptr = %p", ptr);//pointer points to invalid memory has some garbage that compiler convert as an int show or segmentation fault

    return 0;
}