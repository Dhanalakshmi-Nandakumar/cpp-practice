#include <iostream>
using namespace std;
class parent
{
   private: int a;
   protected: int b;
   public: int c;
   void funParent()
   {
    a=10;
    b=12;
    c=9;
   }
};
class child:private parent
{
    //private: //note-anything inside child class accessible such as b and c
  void funChild()
   {
    //a=10;
    b=12;
    c=9;
   }
};
class grandChild:public child
{
   void funGrandChild()
   {
    //a=10;
    // b=12;
    // c=9;
   }
};

int main() {
    
   parent c;
    //c.a=9;
    //c.b=8;
    c.c=8;
    return 0;
}