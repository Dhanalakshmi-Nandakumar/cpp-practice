#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int num;
    cout<<"Enter a number  ";
    cin>>num;
    int temp=num;
    if(num%2==0) //32
    {
        
        while(temp>1) //true
        { 
           
             if(temp%2!=0 || temp%2==1  )
            {
                cout<<"number is not power of 2  "<<num;
                break;
            }
                temp/=2; //1
        }
        if(temp==1)
        {
            cout<<"number is power of 2  "<<num;
        }
           
    }
    
    else
    {
        cout<<"number is odd";
    }
   // cout<<1/2;
    return 0;
}