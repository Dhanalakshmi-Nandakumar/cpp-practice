#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int sum=0;
        int number;
        cin>>number;
        for(int j=number;j>0;j/=10)
        {
           sum+=j%10;
        }
        cout<<"sum of  "<<number<<"is"<<sum<<endl;
    }

    return 0;
}