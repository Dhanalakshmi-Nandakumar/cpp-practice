#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
       length=l;
       breadth=b;
    }
    int area()
    {
        return length*breadth;
    }

};
int main() {
     //normal pointer
    // Rectangle *ptr=new Rectangle(12,34);
    // cout<<ptr->area();

   //shared pointer--2 or 3 pointer can point to rectangle object at a time, object can be shared herre

  shared_ptr<Rectangle> p(new Rectangle(4,5));
   cout<<"p pointer  "<<p->area()<<endl;
   
   shared_ptr <Rectangle> ptr=p;
   cout<<"\nptr pointer  "<<ptr->area();
   cout<<"let'see how many pointers are pointed by the same rectangle  object "<<p.use_count();
    return 0;
}