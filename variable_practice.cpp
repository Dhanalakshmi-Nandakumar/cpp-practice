#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //Your Code goes here!
    int age=22;
    cout<<age<<endl;
    age=24;
     cout<<age<<endl;
     //age will be overwritten here
     cout<<"Enter age "<<endl;
    cin>>age;
   float float_num=45.8907654311;
   double double_num=45.677651123311;
   cout<<"float number is "<<float_num<<endl;
   cout<<"double number is "<<double_num<<endl;
   cout<<"float number with fixed precision is "<<fixed<<setprecision(10)<<float_num<<endl;
   cout<<"double number with fixed precision is "<<double_num<<endl;
    cout<<age<<endl;
    cout.unsetf(ios::fixed);
    cout<<setprecision(11)<<double_num<<endl;
    cout<<"double number with fixed precision is "<<double_num<<endl;
    age=30;
    cout<<age++;
    cout<<endl<<age<<endl;
    age=40;
    cout<<++age;
    string a="90",b="80";
    cout<<a+b;

    return 0;
}