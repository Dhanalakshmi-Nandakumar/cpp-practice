#include <bits/stdc++.h>
using namespace std;
template <class T>
T fun(T receive)
{
     receive();
}
int main() {
      int a=10,b=9;
      auto i=[&b](){cout<<"\n b value is "<<++b<<endl;};
      fun(i);
      [&a](){cout<<++a<<endl;}();
      [a](){cout<<a<<endl;}();
      auto myname=[](){return "dhana";};
     cout<< myname();
     [](){cout<< "hello";}();
     [](int x,int y){cout<<x+y;}(5,7);
     cout<<"\n";
     //cout<<([](int x,int y){return x+y;}(15,7));
     int sum=[](int x,int y)->int{return x+y;}(15,71);
     cout<<"\nsum is"<<sum;
    string msg=[]()->string {return "hello";}();
    cout<<endl<<msg;
    return 0;
}