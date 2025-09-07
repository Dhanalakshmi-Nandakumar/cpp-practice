//we are passing call by value inside structure
//note by default array pass by reference but inside structure its possible to pass by value
#include <iostream>
using namespace std;
struct emp
{
  int a[5],b;
};
void fun(struct emp Emp2)
{
    Emp2.a[0]=1000;
    Emp2.a[1]=2000;
}
int main() {
    //Your Code goes here!
    struct emp Emp1={{1,2,3,4,5},6};
    fun(Emp1);
    //it did not change since it pass by value
    cout<<Emp1.a[0]<<"  "<<Emp1.a[1];
    return 0;
}