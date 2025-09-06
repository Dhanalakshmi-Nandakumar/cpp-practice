#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //Your Code goes here!
    vector <int> v{1,2,3,4,5,6};
    reverse(v.begin(),v.end());
    cout<<"Reversing the vector"<<endl<<"\n";
    for(auto it :v)
    {
        cout<<it<<"   ";
    }
    return 0;
}