#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    //power of two problem 
    int n,num=0;
    cout<<"Enter number ";
    cin>>n;
  num=n;
    int flag=0;
    while(num>1)
    {
        if(num%2!=0 || num%2==1)
        {
            cout<<n<<" is not power of 2"<<endl;
            flag=1;
            break;
        }
        num/=2;
    }
    if(flag==0)
    {
            cout<<n<<" is power of 2"<<endl;
    }
    
    return 0;
}