#include <bits/stdc++.h>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> vec{12,34,5,6,7,6,6,8,9,0,2,3,4,5,67,};
    //it remove duplicates
    unordered_set <int> s{vec.begin(),vec.end()};
     //it won't remove duplicates
//    vector <int> vec2(vec);
//     cout<<"number of distinct element in the array "<<vec2.size();
    return 0;
}