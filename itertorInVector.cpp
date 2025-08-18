#include <bits/stdc++.h>
using namespace std;

// Utility function to print vector elements
void printVector(vector<int> arr)
{
    for (auto it : arr)   // range-based for loop
    {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    // -----------------------------
    // 1. Basic vector initialization
    // -----------------------------
    vector<int> vec {10, 20, 30};  // initialize with values

    // iterator pointing to beginning
    auto it = vec.begin();   

    // -----------------------------
    // 2. Inserting elements
    // -----------------------------
    vec.insert(vec.begin() + 2, 1);         // insert single element '1' at index 2
    vec.insert(vec.begin() + 2, 4, 7);      // insert 4 copies of '7' starting at index 2
    vec.insert(vec.begin() + 2, 1);         // again insert '1' at index 2

    // print after insertions
    printVector(vec);

    // -----------------------------
    // 3. Other ways to initialize vectors
    // -----------------------------
    // vector<int> vec3 = {10, 20, 30, 49, 50};   // list initialization
    // vector<int> vec2 {10};                     // contains only one element (10)
    // vector<int> vec4(10);                      // size 10, all values initialized to 0
    // vector<pair<int,int>> v1{{1,2},{3,4},{5,6}};
    // cout << v1[1].second << endl;             // prints 4

    // -----------------------------
    // 4. Taking user input into vector
    // -----------------------------
    /*
    vector<int> userInput;
    cout << "Enter size: ";
    int size;
    cin >> size;

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        userInput.push_back(num);   // push elements at the end
    }

    // userInput.pop_back();   // removes last element

    cout << "First element: " << userInput.front() << endl;
    cout << "Last element: " << userInput.back() << endl;

    printVector(userInput);
    */

    // -----------------------------
    // 5. Iterators
    // -----------------------------
    /*
    vector<int>::iterator it1 = userInput.begin();   // points to first element
    vector<int>::iterator it2 = userInput.end();     // points to "past the last element"
    vector<int>::iterator it3 = userInput.end() - 1; // points to last element

    cout << "First element using iterator: " << *it1 << endl;
    cout << "Last element using iterator: " << *it3 << endl;

    // printing using iterator in loop
    for (auto it = userInput.begin(); it != userInput.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    */

    // -----------------------------
    // 6. Range-based for loop (foreach)
    // -----------------------------
    /*
    for (auto val : userInput) {
        cout << val << " ";
    }
    cout << endl;
    */

    // -----------------------------
    // Notes:
    // - Iterators behave like pointers -> *it gives value, it gives address
    // - Range-based loop is simpler but does not give index
    // - insert(), push_back(), pop_back(), erase() are main modifying functions
    // -----------------------------

    return 0;
}
