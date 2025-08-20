#include <bits/stdc++.h>
using namespace std;

// Utility function to print current state of min-heap
void printHeap(priority_queue<int, vector<int>, greater<int>> pq) {
    cout << "[ ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "]";
    cout << endl;
}

int main() {
    // Min-heap: smallest element has highest priority
    priority_queue<int, vector<int>, greater<int>> pqAsc;

    cout << "=== INSERTION WORKFLOW (push) ===" << endl;

    pqAsc.push(10);
    cout << "After push(10): "; printHeap(pqAsc);

    pqAsc.push(30);
    cout << "After push(30): "; printHeap(pqAsc);

    pqAsc.push(20);
    cout << "After push(20): "; printHeap(pqAsc);

    pqAsc.push(5);
    cout << "After push(5):  "; printHeap(pqAsc);

    pqAsc.push(1);
    cout << "After push(1):  "; printHeap(pqAsc);

    cout << "\n=== REMOVAL WORKFLOW (pop) ===" << endl;

    while (!pqAsc.empty()) {
        cout << "Top = " << pqAsc.top() << "  popping...\n";
        pqAsc.pop();
        cout << "Remaining heap: "; printHeap(pqAsc);
    }

    return 0;
}
