#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxHeap;
    maxHeap.push(30);
    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(310);
    maxHeap.push(120);
    maxHeap.push(520);

    cout << "Top (largest): " << maxHeap.top() << endl; 
    maxHeap.pop(); 

    cout << "Remaining elements in maxHeap: ";
    while(!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(50);

    cout << "Top (smallest): " << minHeap.top() << endl; 
    cout << "Remaining elements in minHeap: ";
    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
}
