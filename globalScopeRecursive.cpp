#include <iostream>
using namespace std;
int x=0;//global scope only one instance is created , note x is not created for every function call
int fun(int n)
{
      
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