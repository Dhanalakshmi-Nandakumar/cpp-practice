#include <iostream>
using namespace std;
class Rectangle
{
   private:
     int length;
     int breadth;
   public:
   int p;
   //
     Rectangle(int l=0,int b=0)
     {
        setLength(l);
        setBreadth(b);
     }
     void setLength(int l)
     {
         if(l>=0)
           length=l;
         else
           length=0;
     }
      int setBreadth(int b)
     {
         if(b>=0)
           breadth=b;
         else
           breadth=0;
     }
     int getLength()
     {
        return length;
     }
     int getBreadth()
     {
        return breadth;
     }
     int area()
     {
        return length*breadth;
     }
};
class Cuboid:public Rectangle
{
    private:
    int height;
    public:
    
    Cuboid(int h=0)
     {
        setHeight(h);
     }
    void setHeight(int h)
     {
         if(h>=0)
           height=h;
         else
          height= 0;
     }
     int getHeight()
     {
        return height;
     }
     int volume()
     {
        return getLength()*getBreadth()*getHeight();
     }

};
int main() {
    Cuboid obj(10);
    cout<<obj.volume();
    obj.setLength(5);
    obj.setBreadth(10);
    obj.p=100;
    cout<<"\n"<<obj.volume();
    cout<<"\n"<<obj.p;
    return 0;
}