#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Declare empty queue
    queue<int> q1;
    
    // Insert some elements into queue
    q1.push(3);
    q1.push(4);
    q1.push(5);
    //pop element does not return anything to print popped eleemnt we can use front()
    //void pop();

    cout<<"popping element "<<q1.front()<<endl;
    q1.pop();
    // Create another queue from q1
    queue<int> q2(q1);
    
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}