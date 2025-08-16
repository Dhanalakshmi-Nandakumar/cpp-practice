#include <iostream>
#include <algorith>
using namespace std;
// 31.      4 4 4 4 4 4 4  
//          4 3 3 3 3 3 4   
//          4 3 2 2 2 3 4   
//          4 3 2 1 2 3 4   
//          4 3 2 2 2 3 4   
//          4 3 3 3 3 3 4   
//          4 4 4 4 4 4 4 
void numberPattern(int n)
{
    int N=2*n;
   for(int row=1;row<=2*n-1;row++)
   {
    for(int col=1;col<=2*n-1;col++)
    {
         cout<<min(min(row,col),min(N-row,N-col));

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