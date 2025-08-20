#include <bits/stdc++.h>
using namespace std;

// ⚠️ Not available:

// insert() ❌ (use push() instead)

// erase() ❌ (no way to remove arbitrary elements)

// Iterators (begin(), end()) ❌ (hidden to maintain heap property)

int main() {
    // Max-Heap by default
    priority_queue<int> maxHeap;

    // Insert elements using push()
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    cout << "Current size: " << maxHeap.size() << endl;
    cout << "Top element: " << maxHeap.top() << endl;

    // Remove top element
    maxHeap.pop();
    cout << "After pop, new top: " << maxHeap.top() << endl;
    cout << "Size now: " << maxHeap.size() << endl;

    // Check if empty
    if (maxHeap.empty())
        cout << "Heap is empty" << endl;
    else
        cout << "Heap is not empty" << endl;

    return 0;
}


    // cout<<"using iterator printing the value give an error";
    // for(auto it=maxHeap.begin();it!=maxHeap.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    // cout << endl;


