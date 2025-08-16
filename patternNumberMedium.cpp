#include <iostream>
#include <algorithm>
using namespace std;
// 31.      4 4 4 4 4 4 4  
//          4 3 3 3 3 3 4   
//          4 3 2 2 2 3 4   
//          4 3 2 1 2 3 4   
//          4 3 2 2 2 3 4   
//          4 3 3 3 3 3 4   
//          4 4 4 4 4 4 4 
//distance between the number from all side, left ,right,down,up and calculate formula
void numberPattern(int n)
{
    int N=2*n;
    int originalN=n;
   for(int row=1;row<=2*n-1;row++)
   {
    for(int col=1;col<=2*n-1;col++)
    {
         cout<<originalN-min(min(row,col),min(N-row,N-col))<<" ";

    }
    cout<<endl;
   }
}
int main() {
    //Your Code goes here!
    
    int t;
   cin>>t;
    for(int i=1;i<=t;i++)
    {
         int n;
         cout<<"Enter number "<<endl;
         cin>>n;
         numberPattern(n);
    }
    return 0;
}