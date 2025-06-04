#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int num;
    cout<<"Enter a number";
    cin>>num;
    int temp=num;
    if(num%2==0)
    {
        
        while(temp/=2)
        {
            if(temp==1)
            {
                cout<<"number is square root of 2";
                break;
            }
        }
    }
    return 0;
}