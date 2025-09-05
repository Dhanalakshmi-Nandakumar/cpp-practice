#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    char choice;
    cin>>choice;
    switch(choice)
    {
       case '1':
       cout<<"Monday ";
       break;
    case '2':
       cout<<"tuesday ";
       break;
    case '3':
       cout<<"wednesday ";
       break;

    case '4':
       cout<<"thursday ";
       break;
    default:
        cout<<"enter valid choice";
        break;
    }
   
    return 0;
}