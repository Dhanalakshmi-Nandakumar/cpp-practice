#include <iostream>
using namespace std;
class yours; //always declare then only my class know 
class my 
{
    private:
    int a=60;
    friend yours;
};
class yours
{
   my obj;
   
//you can access using object only and within function not directly in class , bcoz only declarations are allowed
//cout<<obj.a;

//error //cout<<a;
public:
void display()
{
    cout<<obj.a;
}
};
int main() {
    yours d;
    d.display();
    return 0;
}