#include <iostream>
using namespace std;

template <class A, class B, class C>
B average(A a, B b, C c )
{
    B result = (a + b + c) / 3;   // store in B (double data type)
    return result;              
}

int main() {
    int a = 900;
    double b = 90.78;
    float c = 88.90;

    cout << average(a, b, c);  
    return 0;
}
