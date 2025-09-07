#include <iostream>
using namespace std;
//difference
//  int a=90; //data var 
//     int *p;//address var
//     int &r=a;//ref var
int main() {
    //another name to variable
    int a=90;
    int &r=a;
    ++r;
    cout<<a<<endl;
    ++a;
    cout<<r<<endl;
    int b=80;
    r=b;
    cout<<a;//it print 80 since we assigned r/a value to b value
     
    return 0;
}