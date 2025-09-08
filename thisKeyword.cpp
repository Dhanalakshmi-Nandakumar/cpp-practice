#include <iostream>
using namespace std;
class Arithmetic
{
    private:
    int a,b;
    public :
    Arithmetic(int a,int b);
    int add();
    int sub();
};
Arithmetic::Arithmetic(int a , int b)
{
    this->a=a;
    this->b=b;
}
int Arithmetic:: add()
{
    int c;
    c=a+b;
    return c;
}
int Arithmetic:: sub()
{
   int c;
    c=a-b;
    return c;
}
int main() {
    Arithmetic obj(40,20);
    cout<<obj.add()<<endl;
    cout<<obj.sub();

    return 0;
}