#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter number to find the sum of digits";
    int n,sum=0;
    cin>>n;
    if(n==0)
    {
        cout<<"Sum of digit is "<<1<<endl;
    }
   else
   {
     for(n;n>0;n/=10)
    {
       sum+=n%10;
    }
     cout<<"Sum of digit is "<<sum<<endl;
   }
   
    return 0;
}
