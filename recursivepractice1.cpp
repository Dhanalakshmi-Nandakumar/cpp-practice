#include <iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
}
int main() {
    
  int x=3;
  
  cout<<"result  "<<fun(x);
    return 0;
}