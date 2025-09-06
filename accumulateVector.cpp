#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //Your Code goes here!
    int sum{};
    vector <int> v{1,2,3,4,5,6};
    sum=accumulate(v.begin(),v.end(),31);
    cout<<"sum of the vector :  "<<sum<<endl<<"\n";
    return 0;
}