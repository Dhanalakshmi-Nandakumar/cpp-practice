
#include <bits/stdc++.h>
using namespace std;
int main() {
   
   int age;
   cin>>age;
   if(age<18)
   {
       cout<<"you have to be an 18 years old to eligible for vote ";
   }
   else if(age<=55)
   {
       cout<<"You are  eleigible to vote ";
       if(age>45 && age<=55)
       {
           cout<<" but , you are going to retire soon";
       }
   }
   else if(age>56)
   {
       cout<<" sorry you are disqulaified ";
   }

    return 0;
}