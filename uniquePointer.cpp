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

   //unique pointer--can point to one object at a time

   unique_ptr<Rectangle> p(new Rectangle(4,5));
   cout<<p->area()<<endl;
   //unique_ptr<Rectangle> ptr=p;//it cannot point to same object since its unique pointer object of p cannot be shared
   unique_ptr<Rectangle> ptr;
   ptr=move(p);
   cout<<"now ptr is pointing to rectangle object and p points to invalid memory since it s moved  "<<ptr->area();

   if(p) 
   {
    cout << p->area();
   }
 else {
    cout << "p is empty now, cannot access object";
}
    return 0;
}