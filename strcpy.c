#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "C Programming leanring and today learned core concepts of c";
    char copyVariable[60];
    strcpy(copyVariable,src);
   // No bounds check
    printf("Copied: %s\n",copyVariable);
    return 0;
}
