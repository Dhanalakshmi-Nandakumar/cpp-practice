//destructor behaviour in inheritance
#include <iostream>
using namespace std;
class Base
{
    public:
  Base()
  {
    
    cout<<"Base constructor called";
  }
  ~ Base()
  {
    cout<<"\n Base destructor called";
  }
};
class Derived:public Base
{
    public:
     Derived()
  {
   
    cout<<"Derived constructor called";
  }
  ~ Derived()//derived class destructor called first then base class destructor called
  {
    cout<<"\nDerived destructor called";
  }
};
int main() {
    Derived d;
    return 0;
}