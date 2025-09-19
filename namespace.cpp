#include <iostream>
using namespace std;
namespace first
{
    void fun()
{
     cout<<"first";
}
}
namespace second
{
    void fun()
{
    cout<<"\nsecond";
}
}
using namespace first;
int main() {
    //Your Code goes here!
    fun();
    second::fun();
    return 0;
}