#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Ask the user for the size of the array
    printf("Enter a limit to allocate memory for an array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*) malloc(n * sizeof(int));

    // Check if malloc was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input elements into the dynamically allocated array
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Store values at the dynamically allocated memory
    }

    // Output the elements of the dynamically allocated array
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);  // Accessing elements of the dynamically allocated array
    }
    printf("\n");

    // Print the size of the array (number of elements * size of int)
    printf("Size of Array: %d bytes\n", n * sizeof(int));

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}