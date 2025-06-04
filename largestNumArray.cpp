#include <iostream>
#include <climits> // Required for INT_MIN
using namespace std;

int largestNum() {
    int arr[6] = {67, 89, 0, 56, 78,900};
    int largest_value = INT_MIN;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (largest_value < arr[i]) {
            largest_value = arr[i];
        }
    }
    return largest_value;
}

int main() {
    int result = largestNum();
    cout << "Largest number: " << result << endl;
    return 0;
}
