//destructor behaviour in inheritance
#include <iostream>
using namespace std;
class Base
{
    public:
    int *ptr;
  Base()
  {
    
    cout<<"\nBase constructor called";
  }
 virtual  ~ Base()
  {
    
    cout<<"\n Base destructor called";
  }
};
class Derived:public Base
{
    public:
     Derived()
  {
   
    cout<<"\nDerived constructor called";
  }
  ~ Derived()
  {
    delete ptr;//then only it will destroy and destructor call
    cout<<"\nDerived destructor called";
  }
};
int main() {
   Base *ptr=new Derived();
   delete ptr;//
    return 0;
}