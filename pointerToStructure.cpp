#include <bits/stdc++.h>
using namespace std;
struct employee //definition of structure
{
    string name;
    int age;
    int salary;
}emp; //here emp is an obj of struct
int main() {
    //Your Code goes here!
    emp={"dhana",22,75000}; 
    emp.age=24;
   cout<<emp.name<<" "<<emp.age<<endl; // use . operator only for object 
   employee *empPtr=0; //*empPtr is an pointer pointing to struct (employee)
   empPtr=&emp;
   //c++ style to change ref value 
  (*empPtr).name="deepa";
   //c style modifying 
   //empPtr->name="dhanalakshmi";// use -> only pointer 

     cout<<emp.name<<" "<<emp.age;
    return 0;
}