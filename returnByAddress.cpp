#include <bits/stdc++.h>
using namespace std;
int * fun(int n)
{
int *p=new int[n];
cout<<"address of p"<<p<<endl;
for(int i=0;i<n;i++)
p[i]=i+2;
return p; //returning the address of p created in heap , note-even fn() ends we can use the value
}
int main()
{
int *ptr=fun(5);
for(int i=0;i<5;i++)
{
    cout<<ptr[i]<<endl;
}
cout<<ptr[0];
}