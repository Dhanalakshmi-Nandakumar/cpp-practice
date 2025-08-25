#include <bits/stdc++.h>
using namespace std;
//No front() and back() in stack
//stack---arranging plates

int main() {
    stack<int> stk;

    stk.push(100);
    stk.push(88);
    stk.push(30);
    stk.push(380);
    stk.push(350);
    stk.push(330);
    stk.push(310);
   cout<<"top element  "<<stk.top()<<endl;

    cout<<"size of stack before popping all element  "<<stk.size()<<endl;
    // we can use push not insert
  // stk.insert()
    // loop until stack is empty
    while (!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }
    cout<<"size of stack after popping all element  "<<stk.size();

    return 0;
}
