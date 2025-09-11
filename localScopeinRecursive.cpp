#include <iostream>
using namespace std;
int fun(int n)
{
     int x=0; //local scope-For every call one instance is created , note x is  created for every function call which means x bcome 0 
     
    if(n>0)
    {
        
        ++x;
        return fun(n-1)+x;
    }
    return 0;
}
int main() {
    //Your Code goes here!
    int n=5;
    cout<<fun(n);
    return 0;
}