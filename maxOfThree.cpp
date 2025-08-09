#include <iostream>
using namespace std;

int main() {
    //largest of among three number
    //int a=4,b=67,c=9;
    int a,b,c,max,finalMax;
    cout<<"Enter three number ?" ;
    cin>>a>>b>>c;
    // if(a>b && a>c)
    //   cout<<a<<" is greater";
    // else if(b>a && b>c)
    //   cout<<b<<" is greater";
    // else
    //   cout<<c<<" is greater";
    // max=(a>b && a>c)?a:b;
    // finalMax=(max>c)?max:c;
    // cout<<finalMax;
    cout<<(a>b && a>c)?a:((b>c)?b:c);
    return 0;
}