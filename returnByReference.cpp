#include <bits/stdc++.h>
using namespace std;
int & fun(int &r)
{
    cout<<"value of r inside function "<<r;
    return r;// here, it returning the references of r (i.e..)a
}
int main() {
    int a=90;
    //function is in left hand side , which act as lvalue || fun(a) replaces a (which return by function it's r reference)
    fun(a)=800; //a=800 both are same only
    cout<<a;

    return 0;
}