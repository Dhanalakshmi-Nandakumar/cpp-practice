#include <iostream>
using namespace std;
int division(int x,int y)
{
    if(y==0)
     // throw 5;
      throw 'e';
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
    catch(char const* e) 
       {
        cout<<"division by zero error "<<e;
       }
    catch(...)
    {
        cout<<"Error occured";
    }
    cout<<"\nEnd the program successfully";
    return 0;
}