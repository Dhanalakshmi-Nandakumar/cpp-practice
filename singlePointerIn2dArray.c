#include <stdio.h>
void print(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", *(arr + i * cols + j));
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3},
    {4, 5, 6},{7, 8, 9}};
    
    // Passing the array as a pointer along with
    // the size of rows and columns
    print((int *)arr, 3, 3); // we are passing the array as flat pointer int (*arr)[3]--> int *arr 
    // arr * -->pointing to the 1st element of the array which is arr[0][0]
    // there is no size given compiler loses it size and offset needs to be done manually to access the element in the 2d array

    return 0;
}