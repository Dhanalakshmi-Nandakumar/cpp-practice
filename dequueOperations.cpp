#include <bits/stdc++.h>
using namespace std;

int main() {
    
    deque <string> name;
    name.push_back("priya");
    name.push_back("praveen");
    name.push_front("kutty praveen");
    name.pop_front();
    name.pop_back();
    for(auto it=name.begin();it!=name.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}