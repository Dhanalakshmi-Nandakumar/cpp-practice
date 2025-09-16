#include <iostream>
using namespace std;
//Eg : someone has buy car from us, they did some chnages
class parent
{
    public:
    void display()
    {
         cout<<"parent class";
    }
};
class child:public parent
{
 public:
 void display() //parent class is override  by child class with some changes
 {
    cout<<"im Child class";
 }  
};
int main() {
    child c;
    c.display();
    return 0;
}