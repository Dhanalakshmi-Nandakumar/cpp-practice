#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{
    private:
    T a,b;
    public :
    Arithmetic(T a,T b);
    T add();
    T sub();
};//when class end template scope end here
template <class T> //wherever use classname outside class "use template"
Arithmetic<T>::Arithmetic(T a , T b) //the class Arithmetic is template so we should use template parameter
{
    this->a=a;  // initializing private data= normal data that we are giving
    this->b=b;
}
template <class T>
T Arithmetic<T>:: add()
{
    T c;
    c=a+b;
    return c;
}
template <class T>
T Arithmetic<T>:: sub()
{
   T c;
    c=a-b;
    return c;
}
int main() {
    Arithmetic <int> obj(40,20);
    cout<<obj.add()<<endl;
    Arithmetic <float> obj1(40.22,20.66);
    cout<<obj1.sub()<<endl;
        Arithmetic <char> obj2('D','S');
    cout<<obj2.add();

    return 0;
}