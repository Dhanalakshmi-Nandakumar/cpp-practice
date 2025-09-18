#include <iostream>
using namespace std;
class car
{
   public:
   virtual void start()
   {
    cout<<"\ncar started";
   }
   virtual void stop()
   {
    cout<<"\ncar stopped";
   }
};
class innova:public car
{
   public:
   void start()
   {
    cout<<"\ninnova started";
   }
   void stop()
   {
    cout<<"\ninnova stopped";
   }
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
    car *obj=new innova();
    obj->start();
    obj->stop();
    obj=new swift();
    obj->start();
    return 0;
}