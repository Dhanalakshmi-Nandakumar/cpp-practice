#include <iostream>
using namespace std;
bool isEven(int num)
{
    if(num%2==0)
      return true;
    return false;
}
int main() {
    
    bool (*ptr)(int)=isEven;
    ptr=isEven;
   // cout<<(*ptr)(8);
    //cout<<ptr(8);
    return 0;
}