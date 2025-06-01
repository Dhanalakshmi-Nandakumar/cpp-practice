#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int age;
    bool login="true";

    cout<<"Enter your age ";
    cin>>age;
   if(age>18)
   {
      cout<<"you are eligible to use instagram"<<endl;
      if(login)
      {
        cout<<"login successfully";
      }
      else
      {
          cout<<"please register to sign in"; 
      }
   
   }

   else
   {
  cout<<"sorry you are below 18 ..not eligible!!"<<endl;
   }
    cout<<endl;
    bool human=true;
    //ternary operator
    (age>20)?cout<<"you are allowed":cout<<"not allowed";
     age>20 && human==1 ?cout<<"you are allowed":cout<<"not allowed";
    return 0;
}