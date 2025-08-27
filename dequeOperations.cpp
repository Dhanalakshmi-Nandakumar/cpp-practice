#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    // ✅ Correct usage
    dq.push_back(10);   // [10]
    dq.push_front(5);   // [5, 10]
    dq.push_back(20);   // [5, 10, 20]
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl; // 5, 20
    dq.pop_front();     // removes 5 → [10, 20]
    dq.pop_back();      // removes 20 → [10]

    
    // cout << dq.pop_front(); // ERROR: pop_* returns void

    return 0;
}
