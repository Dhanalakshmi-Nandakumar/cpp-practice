#include <iostream>
using namespace std;
struct Person
{
   string name;
   int age;
};

template <class A, class B, class C>
B average(A a, B b, C c )
{
    B result = (a + b + c) / 3;   // store in B (double data type)
    return result;              
}
template <typename T,typename K>
T max(T a,K b)
{
   return (a>b?a:b);
}

int main() {
    Person p1("dhana",22);
    Person p2("udaya",27);
    Person p3("dev",67);
    int a = 900;
    double b = 90.78;
    float c = 88.90;
   
    cout<<"max of two number is "<<max<int,double>(99,78.90);
    cout<<endl;
    cout<<"average of number   ";
    cout << average(a, b, c);  
    return 0;
}
