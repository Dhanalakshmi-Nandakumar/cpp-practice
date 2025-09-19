#include <iostream>
using namespace std;
class friendClass
{
    private:
    int a=22;
    protected:
    int b=90;
    public:
    int c=77;
    friend void fun(); //using friend keyword we can access data
};
void fun()
{
    friendClass obj;
   cout<<obj.a;//error-private we can access inside the class only
   cout<<"\n"<<obj.b;//error-we can access only through derived class
   cout<<endl<<obj.c;
}
int main() {
    
    fun();
    return 0;
}