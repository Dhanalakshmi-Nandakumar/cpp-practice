#include <iostream>
using namespace std;
class Complex
{
   private:
     int real;
     int img;
 public:
   Complex(int r=0,int i=0)
   {
      real=r;
      img=i;
   }
   //Complex sub(Complex s)// c1 parameter
   Complex operator-(Complex s)
   {
    Complex temp;
    temp.real=real-s.real;
    temp.img=img-s.img;
    return temp;
   }
   void display()
   {
    cout<<real<<"-"<<img<<"i";
   }
};
int main() {
    
    Complex c1(1,2),c2(4,4),c3;
    //c3=c2.sub(c1);
    c3=c2-c1;
    c3.display();
    return 0;
}