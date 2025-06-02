#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int num1,num2,sum;
    cout<<"Enter two number ";
    cin>>num1>>num2;
    for(int start=num1;start<=num2;start++)
    {
        sum=0;
         for(int temp=start;temp>0;temp/=10)
         {
                sum+=temp%10;
         }
         cout<<"sum is"<<sum<<endl;
    }
    return 0;
}