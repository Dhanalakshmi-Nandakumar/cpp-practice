#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);   // add to back → [10]
    dq.push_front(20);  // add to front → [20, 10]
    dq.push_back(30);   // → [20, 10, 30]

    // cout << dq.front() << endl; // 20
    // cout << dq.back() << endl;  // 30

    // dq.pop_front();     // remove 20 → [10, 30]
    // dq.pop_back();      // remove 30 → [10]

    // // random access works like vector
    // cout << dq[0] << endl; // 10
    dq.insert(dq.begin()+1,5,6);
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}
