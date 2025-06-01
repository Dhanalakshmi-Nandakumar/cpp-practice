#include <iostream>
using namespace std;

int main() {
    int day=2003;
    // int userDay;
    // cout<<"Enter your born year";
    // cin>>userDay;
    switch(day)
      {
         case 2005:
       cout<<"this is not your born year";
       break;
       case 2003:
       cout<<"this is your born year";
       break;
       case 2007:
       cout<<"this is not your born year";
       break;
       case 2008:
       cout<<"this is not your born year";
       break;
       default:
        cout<<"born year does not match";
       
      }
    

    return 0;
}