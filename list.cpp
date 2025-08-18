#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        ===============================
        STL list (std::list) in C++
        ===============================

        -> list is a **doubly linked list** implementation in STL.
        -> Each element is stored in a separate node, with two pointers:
             - one to the previous node
             - one to the next node
        -> Unlike vector, list elements are **not stored in contiguous memory**.

        ------------------------
        Difference between list and vector:
        ------------------------
        1. Memory:
           - vector: contiguous memory (like array)
           - list: scattered memory (nodes linked together)

        2. Random Access:
           - vector: O(1) access using [] or at()
           - list: O(n) access (must traverse from beginning)

        3. Insertion/Deletion:
           - vector: expensive in middle (O(n))
           - list: cheap anywhere (O(1) if iterator is known)

        4. Iterator:
           - vector::iterator is a random-access iterator (supports it+5, it-3, etc.)
           - list::iterator is a bidirectional iterator (only ++it, --it allowed)
    */

    // Initialize list with elements
    list<int> mylist{10, 20, 30};

    // Insert elements at the front
    mylist.push_front(100);  // list = 100, 10, 20, 30
    mylist.push_front(120);  // list = 120, 100, 10, 20, 30
    mylist.push_front(60);   // list = 60, 120, 100, 10, 20, 30

    // Remove last element
    mylist.pop_back();       // removes 30 → list = 60, 120, 100, 10, 20

    // Insert 2 copies of 100 at the beginning
    mylist.insert(mylist.begin(), 2, 100);  
    // list = 100, 100, 60, 120, 100, 10, 20

    // Erase can remove elements (uncomment to test)
    // mylist.erase(mylist.begin(), mylist.end()); // clears all elements

    cout << "Size of list: " << mylist.size() << endl;

    // Iterating through the list
    // NOTE: for list we use list<int>::iterator, not vector<int>::iterator
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
