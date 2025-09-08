#include <iostream>
using namespace std;
class Rectangle
{
    private:
    //member declaration
    int length;
    int breadth;
    public:
    Rectangle()//default constructor
    {
        length=breadth=0;
    }
    Rectangle (int l,int b);//constructor overloading
    int area();
    int perimeter();//function declaration
    int getLength();
    void setLength(int l);
    ~Rectangle() //destructor
    {
        cout<<"Destructor is called when the program end ): ";
    }
};
Rectangle::Rectangle(int l,int b)
{
   
        length=l;
        breadth=b;
    
}
int Rectangle::area()    //function definition   syntax-->    return_type class_name :: function_name{}
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int Rectangle::getLength() //Accessor function used to read private data of class but it did not modify data
{
    return length; //only return value
}
void Rectangle::setLength(int l)//mutator function used to modify the private data of class
{ 
  length=l; //changing length
  cout<<"setting the length "<<length<<endl;

}

int main() {
    
    Rectangle r(12,34);
    cout<<"Area of rectangle is  "<<r.area()<<endl;
     cout<<"Area of perimeter is  "<<r.perimeter()<<endl;
     cout<<"Retuning the length "<<r.getLength()<<endl;
     r.setLength(88);
     //cout<<"Setting the length is "<<r.length;  //cannot access data directly 

    return 0;
}