#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int n;
    cout<<"Enter a number  ";
    cin>>n;//10
    for(int i=1;i<=n;i+=2)//3<=10
    {
        for(int j=1;j<=i;j++)//1<=3
        {
            
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}