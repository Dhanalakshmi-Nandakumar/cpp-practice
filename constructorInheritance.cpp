#include <iostream>
using namespace std;
class Base//if derived from base then always base class will call first, if it did not have constructor compiler error
{
   public:

   Base()
   {
     cout<<"im calling from base class.....!\n";
   }
   Base(int data)
   { 
      cout<<"data is "<<data;
   }
};
class Derived :public Base
{
public:
 Derived()
   {
     cout<<"im calling from derived class.....!";//note : first it execute base class constructor then it execute derived class constructor
   }
   //  Derived(int data,int data1):Base(data)//calling base class para constructor from derived class para constructor
   // { 
   //    cout<<"\ndata1 is "<<data1;
   // }
   Derived(int data1)
   {
      cout<<"data1 "<<data1;
   }
};
int main() {
    //Your Code goes here!
    //Derived d(3,5);
    Derived d(10);
    return 0;
}