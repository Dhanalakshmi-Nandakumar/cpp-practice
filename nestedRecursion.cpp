#include <iostream>
using namespace std;
//nested recursion
int fun(int n)
{
    if(n>100)
      return n-10;
    return fun(fun(n+11));
}
int main() {
    
    cout<<"Result is "<<fun(95);
    return 0;
}