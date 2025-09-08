#include <iostream>
using namespace std;
class Rectangle
{
    private:
    //member declaration
    int length;
    int breadth;
    public:
    Rectangle()//constructor
    {
        length=breadth=0;
    }
    Rectangle (int l,int b);//constructor overloading
    int area();
    int perimeter();
    int getLength();
    int setLength(int l);
};
Rectangle::Rectangle(int l,int b)
{
   
        length=l;
        breadth=b;
    
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::setLength(int l)
{
  length=l;
  return length;
}

int main() {
    
    Rectangle r(12,34);
    cout<<"Area of rectangle is  "<<r.area()<<endl;
     cout<<"Area of perimeter is  "<<r.perimeter()<<endl;
     cout<<"Retuning the length "<<r.getLength()<<endl;
     cout<<"Setting the length "<<r.setLength(88);
    return 0;
}