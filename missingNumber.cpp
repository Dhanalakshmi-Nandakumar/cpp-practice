#include <iostream>
using namespace std;

int findMissingBruteForce(int arr[], int size) {
    int n = size + 1; // Since one number is missing
    for (int i = 1; i <= n; i++) { //5<=7
        bool found = false;
        for (int j = 0; j < size; j++) {  // 0<8
            if (arr[j] == i) { //8==5
                found = true;
                break;
            }
        }
        if (found==false ||  !found)
            return i;
    }
    return -1; // Should not happen if input is valid
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingBruteForce(arr, size);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
