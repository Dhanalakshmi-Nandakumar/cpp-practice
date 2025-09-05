#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl; //dereferencing operator
    cout<<p<<endl;  //address of a
    cout<<&a<<endl; //address of a
    cout<<&p<<endl; //address of p
    return 0;
}