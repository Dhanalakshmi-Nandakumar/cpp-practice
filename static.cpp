#include <iostream>
using namespace std;
//static keyword
//static will be declared 2 times
//static member can access only static data
//we can access static using objct as well as scope resolution
//static variable have one memory which is shared among all the objects
//static variable is a global variable will restrict data to that class only
class Demo
{
    public:
    int a;
    static int count;//only declaration allowed here
    Demo()
    {
        a=100;
        count++;
    }
    static int fun()//only access static data member
    {
        return count++;
        //a++; //not allowed non static data
    }
    
};
int Demo::count=9;
int main() {
    
    Demo obj;
    cout<<"value of a is "<<obj.a;
     cout<<"\nvalue of count "<<obj.count;
     Demo::count++;
     cout<<endl<<Demo::count;//static data member are accessible through object as well as class name with scope::
     cout<<"\nstatic fun called using object ..."<<obj.fun();
cout<<"\nstatic fun called using scope operator ..."<<Demo::fun();
    return 0;
}