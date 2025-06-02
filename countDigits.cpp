#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    cout<<"Enter number ";
    int num,count=0;
    cin>>num;
    for(num;num>0;num/=10)
    {
       count++; 
    }
    cout<<"number of digits "<<count;
    return 0;
}