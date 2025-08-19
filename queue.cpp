#include <bits/stdc++.h>
using namespace std;

int main() {
    // NOTE:
    // - queue and stack are container adaptors.
    // - They do NOT provide iterators (cannot be directly traversed).
    // - To iterate, use the underlying container (usually deque or list).
    // - Some compilers (MSVC) expose _Get_container(), but it is NON-STANDARD and not portable.

    queue<int> qu;

    // Push elements into queue
    qu.push(10);
    qu.push(100);
    qu.push(101);
    qu.push(104);
    qu.push(107);
    qu.push(67);

    // Pop one element from front
    qu.pop(); // removes 10

    //  Correct way: iterate by popping until empty
    cout << "Queue elements (FIFO order):" << endl;
    while (!qu.empty()) {
        cout << qu.front() << endl; // access front
        qu.pop();                   // remove front
    }

    // ❌ Wrong way (non-standard):
    // queue<int>::iterator it = qu._Get_container().begin(); // ERROR in GCC/Clang
    // Use deque/list directly if iteration is needed.

    return 0;
}
