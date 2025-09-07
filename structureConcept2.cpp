//we are passing call by address inside structure
//note by default array pass by reference but inside structure its possible to pass by value
#include <iostream>
using namespace std;
struct emp
{
  int a[3],b;
};
void fun(struct emp *ptr2)
{
    ptr2->a[0]=1000;
    ptr2->a[1]=2000;
}
int main() {
    //Your Code goes here!
    //struct emp *Emp1=new emp{{1,2,3,4,5},7};
    struct emp e={{1,2,3},6};
    emp *ptr=new emp(e);
    fun(ptr);
    //it did  change since it pass by address
    cout<<ptr->a[0]<<"  "<<ptr->a[1];
    return 0;
}