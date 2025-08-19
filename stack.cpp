#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;

    stk.push(100);
    stk.push(88);
    stk.push(30);
    stk.push(380);
    stk.push(350);
    stk.push(330);
    stk.push(310);
   cout<<"top element"<<stk.top()<<endl;
    
   stk.insert()
    // loop until stack is empty
    while (!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}
