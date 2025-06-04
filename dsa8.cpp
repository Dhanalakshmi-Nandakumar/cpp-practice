#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int N,k;
    cin>>N>>k;
    for(int i=1;i<=N;i++)
    {
        int sum=0;
        
        for(int j=i;j>0;j/=10)
        {
           sum+=j%10;
        }
        if(sum==k)
        {
                cout<<"sum of digit is equal to"<<i<<endl;
        }
        
    }

    return 0;
}