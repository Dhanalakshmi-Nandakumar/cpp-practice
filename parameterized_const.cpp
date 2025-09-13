#include <iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
    public:
     Rectangle(int l=0,int b=0)
    {
        int length=l;
        int breadth=b;
        cout<<l<<" "<<b;
    }

};
int main() {
    
    Rectangle r1{2,3};//creates an object, calls default constructor (uniform init)
    //Rectangle r1(); // it will not create object note: you declaring an fn( ) here
     return 0;
}