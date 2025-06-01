#include <iostream>
using namespace std;

int main() {
    
   //print even number from 1 to  N that is divisible by 7
   int n;
   cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//     if(i%2==0 && i%7==0)
//       cout<<"The number is"<<i<< "even and divisible by 7"<<endl;
//    }
for(int i=2;i<=n;i+=2)
{
    if(i%7==0)
    {
        cout<<"The number is"<<i<< "even and divisible by 7"<<endl; 
    }
}
    return 0;
}