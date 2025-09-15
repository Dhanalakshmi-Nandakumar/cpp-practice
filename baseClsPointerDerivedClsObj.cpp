#include <iostream>
using namespace std;
class Rectangle
{
   public:
   void fun1();
   void fun2();
   void fun3()
   {
      cout<<"fun3 called";
   }
};
class Cuboid:public Rectangle
{
   void fun4();
   void fun5();
};
int main() {
    
    
    Rectangle *ptr;
    ptr=new Cuboid(); //we are saying cuboid is a rectangle so it did not have height 
    ptr->fun3();
    //or
    // Cuboid obj;
    // Rectangle *ptr=&obj;
    // ptr->fun3();// it can call only what pointer points to(i.e) base class function 
    //ptr->fun4(); error


    //  Rectangle obj;
    //  Cuboid *ptr=&obj;  //we are saying rectangle is an cuboid , but rectangle did not have height right?
    return 0;
}