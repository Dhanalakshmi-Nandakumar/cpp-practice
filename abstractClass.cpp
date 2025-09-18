#include <iostream>
using namespace std;
class car
{
   public:
   virtual void start()=0; //pure virtual function
   virtual void stop()=0;
};
class innova:public car  //if not override derived class become abstract
{
   public:
   // void start()
   // {
   //  cout<<"\ninnova started";
   // }
   // void stop()
   // {
   //  cout<<"\ninnova stopped";
   // }
};
class swift:public car
{
  public:
   void start()
   {
    cout<<"\nswift started";
   }
   void stop()
   {
    cout<<"\nswift stopped";
   }
};
int main() {
    //Your Code goes here!
    //car *obj=new innova();//since its not override it become abstract class
    car *obj=new swift();
    obj->start();
    return 0;
}