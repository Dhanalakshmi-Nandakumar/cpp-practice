#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
 int N;
    cout<<"Enter number : ";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)

        {
            continue;
        }
        if(i%3==0 && i%5==0)
        {
            cout<<"fizzbuzz..";
            cout<<endl;

        }
        else if(i%3==0)
        {
            cout<<"Fizz";
             cout<<endl;
        }
          else if(i%5==0)
        {
            cout<<"buzz";
             cout<<endl;
        }
        else
        {
            cout<<i;
             cout<<endl;      
         }
    }    return 0;
}