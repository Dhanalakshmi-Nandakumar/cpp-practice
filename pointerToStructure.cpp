#include <bits/stdc++.h>
using namespace std;
struct employee //definition of structure
{
    string name;
    int age;
    int salary;
}emp;
int main() {
    //Your Code goes here!
    emp={"dhana",22,75000}; 
    emp.age=24;
   cout<<emp.name<<" "<<emp.age<<endl;
   employee *empPtr=0;
   empPtr=&emp;
   //c++ style to change ref value 
  (*empPtr).name="deepa";
   //c style modifying
   //empPtr->name="dhanalakshmi";//changing its value using pointer to struct

     cout<<emp.name<<" "<<emp.age;
    return 0;
}