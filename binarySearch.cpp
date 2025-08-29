#include <bits/stdc++.h>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Found
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Not found
}

// recursive Binary Search
int binarySearchRecursive(vector<int>& arr, int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

int main() {
    vector<int> arr = {2, 4, 7, 10, 15, 20, 33, 40};
    int target = 15;

    // iterative call
    int result1 = binarySearchIterative(arr, target);
    if (result1 != -1)
        cout << "Iterative: Found " << target << " at index " << result1 << endl;
    else
        cout << "Iterative: Not found\n";

    // recursive call
    int result2 = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (result2 != -1)
        cout << "Recursive: Found " << target << " at index " << result2 << endl;
    else
        cout << "Recursive: Not found\n";

    return 0;
}
