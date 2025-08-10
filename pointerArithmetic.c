// 📌 Important difference from pointer-to-array (int (*p)[5])

// int *ptr → pointer to one int (can move element by element)

// int (*p)[5] → pointer to the whole array (moves in chunks of 5 ints at a time)
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  //which is pointing to single element internally i.e &arr[0] 
    
    printf("ptr points to: %d\n", *ptr);  //*ptr = *(1000) =arr[0]
    ptr++;  // Moves to next integer (4 bytes typically)
    printf("After increment, ptr points to: %d\n", *ptr);//20
    
    ptr = ptr + 3;  // Moves 3 integers forward (1004+3*4)
    printf("After adding 3, ptr points to: %d\n", *ptr); //50
    
    ptr--;  // Moves back 1 integer
    printf("After decrement, ptr points to: %d\n", *ptr); //40
    
    return 0;
}