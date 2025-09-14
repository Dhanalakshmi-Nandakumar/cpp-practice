#include <bits/stdc++.h>
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
   // Complex add(Complex x)
   Complex operator+ (Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
   void display()
   {
    cout<<real<<"+i"<<img;
   }
};
int main() {
   
   
    Complex c1(12,3);
    Complex c2(3,5);
    Complex c3;
    c3.display();
    cout<<"\n";
   // c3=c1.add(c2);
   c3=c1+c2;
    c3.display();
    return 0;
}