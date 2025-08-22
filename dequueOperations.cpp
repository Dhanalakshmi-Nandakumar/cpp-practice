#include <bits/stdc++.h>
using namespace std;

int main() {
    
    deque <string> name;
    name.push_back("priya");
    name.push_back("praveen");
    for(auto it=name.begin();it!=name.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}