#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    //when the sum of the number > N then break out of the loop
    int sum=0,N;
    cin>>N;
    for(int i=1;i<=N;i++)
       {
        if(i%2==0 && i%7==0)
           {
            cout<<i<<endl;
            sum+=i;
            if(sum>=N)
            {
                break;
            }

           }

       }
    return 0;
}