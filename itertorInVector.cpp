#include <bits/stdc++.h>
using namespace std;

// Utility function to print vector elements
void printVector(const vector<int>& arr)
{
    for (auto val : arr)   // range-based for loop
        cout << val << " ";
    cout << endl;
}

int main() {
    // -----------------------------
    // 1. Basic vector initialization
    // -----------------------------
    vector<int> vec {10, 20, 30};  // initialize with values

    // iterator pointing to beginning
    auto it = vec.begin();    // points to 10

    // -----------------------------
    // 2. Inserting elements
    // -----------------------------
    vec.insert(vec.begin() + 2, 1);        // insert single element '1' at index 2
    vec.insert(vec.begin() + 2, 4, 2);     // insert 4 copies of '2' starting at index 2
    vec.insert(vec.begin() + 2, 1);        // again insert '1' at index 2
    vec.insert(vec.begin() + 5, 7);        // insert '7' at index 5

    // -----------------------------
    // 3. Erasing elements
    // -----------------------------
    vec.erase(vec.begin());                // remove first element (10)
    vec.erase(vec.begin(), vec.begin() + 5); // erase 5 elements from start

    // -----------------------------
    // 4. Copying & Swapping vectors
    // -----------------------------
    vector<int> vectorCopy(vec.begin(), vec.end());  // copy using range constructor
    
    // Swapping with another vector
    vector<int> anotherVec {100, 200, 300};
    vectorCopy.swap(anotherVec);

    // print after modifications
    cout << "Contents of vec: ";
    printVector(vec);

    cout << "Contents of vectorCopy (after swap): ";
    printVector(vectorCopy);

    // -----------------------------
    // 5. Other ways to initialize vectors
    // -----------------------------
    vector<int> vec2 {10};              // contains one element (10)
    vector<int> vec3 = {10, 20, 30, 49, 50}; 
    vector<int> vec4(5, 9);             // size 5, all values initialized to 9
    vector<pair<int,int>> v1{{1,2}, {3,4}, {5,6}};
    cout << "Second element's second value: " << v1[1].second << endl; // prints 4

    return 0;
}
