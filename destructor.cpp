#include <iostream>
using namespace std;
class Demo
{
    int *ptr;
    public:
  Demo()
  {
    ptr=new int[300];
    cout<<"constructor called";
  }
  ~ Demo()
  {
    delete []ptr;//free memory when destructor calling
    cout<<"\ndestructor called";
  }
};
void fun()
{
    Demo d;
}
int main() {
    fun();
    return 0;
}