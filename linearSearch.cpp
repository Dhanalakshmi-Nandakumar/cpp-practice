#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
         cout << "Element not found" << endl;
    }
    return 0;
}
