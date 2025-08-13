#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main() {
    // Allocate memory for "Hello" (5 chars + null terminator)
    char *s = (char*)malloc(6 * sizeof(char));
    
    if (s == NULL) {
        exit(1); // Allocation failed
    }
    
    char msg[]="Hello";
    strcpy(s,msg); // Initialize the string-->copy the value of hello to s
    printf("%s\n", s);  // Output: Hello

    free(s); // Release memory
    s = NULL; // Safety
    
    return 0;
}