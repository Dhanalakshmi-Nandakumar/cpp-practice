#include <iostream>
using namespace std;
int division(int x,int y)
{
    if(y==0)
      //throw "divisible by zero error";
      throw string("divisible by zero error");
    return x/y;

}
int main() {
    cout<<"Enter value of a , b and c ";
    int a,b,c;
    cin>>a>>b;
    try
    { 
         c=division(a,b);
         cout<<"value of x/y is "<<c;
    }
    //catch(char const* e) 
    catch(string e)
       {
        cout<<"division by zero error "<<e;
       }

    return 0;
}