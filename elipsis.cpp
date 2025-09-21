#include <bits/stdc++.h>
using namespace std;
int sum(int n,...)
{
    va_list list;
    va_start(list,n);//to get all the variable argument use va_start()
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=va_arg(list,int);
    }
    va_end(list);
    return sum;
}
int main() {
    
    cout<<"sum is 5 element is  "<<sum(5,10,20,30,40,50);
    cout<<"\n sum of 7element is   "<<sum(7,1,2,3,4,5,6,7);
    return 0;
}