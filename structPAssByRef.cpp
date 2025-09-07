#include <iostream>
using namespace std;
struct square
{
   int l,b;
};
void fun(struct square &s2)
{
    s2.l=9000;// formal parameter did  chnage actual parameter(when &ref)
    cout<<"inside function l value is "<<s2.l<<endl;
}
int main() {
    //Your Code goes here!
    struct square s1;
    s1.l=12,s1.b=90;
    cout<<"main fn l value is "<<s1.l<<endl;
    fun(s1);
    cout<<"outside function l value is "<<s1.l;
    return 0;
}