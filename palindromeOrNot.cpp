#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr1[10] = "cat";
    char arr2[10];
    int i = 0;

    // find length of arr1
    for (; arr1[i] != '\0'; i++) { }
    i = i - 1;

    int j = 0;
    // reverse 
    for (; i >= 0; j++, i--) {
        arr2[j] = arr1[i];
    }
    arr2[j] = '\0'; // note string always terminate with '\0'

    // compare arr1 and arr2
    bool palindrome = true;
    for (int x = 0; arr1[x] != '\0' && arr2[x] != '\0'; x++) {
        if (arr1[x] != arr2[x]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";

    return 0;
}
