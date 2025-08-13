#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "This is a long string that might overflow";
    char destination[20];  // Only 20 bytes available

    // Copy up to 19 chars (leave space for \0)
    strncpy(destination, source, sizeof(destination) - 1);
    
    // Guarantee null termination
    destination[sizeof(destination)-1]='\0';

    printf("Copied: %s\n", destination);
    return 0;
}