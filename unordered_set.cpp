#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> s={3,4,5};

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);  // duplicate (ignored)

    // Iterate
    cout << "Elements in unordered_set: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Check presence
    if (s.find(20) != s.end())
        cout << "20 is present\n";
    else
        cout << "20 is not present\n";

    // Erase element
    s.erase(10);

    cout << "After erasing 10: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

cout<<"number of distinct element in the array "<<s.size();
    return 0;
}
