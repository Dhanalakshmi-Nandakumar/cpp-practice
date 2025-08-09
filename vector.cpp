#include<vector>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   vector <int> student_height(10,40);
//    int size=student_height.size();
   student_height.push_back(8);
   student_height.push_back(80);
   student_height.push_back(18);
   sort(student_height.begin(),student_height.end());
    student_height.pop_back();
   
    for(int i=0;i<student_height.size();i++)
   {
       cout<< student_height[i];
       cout<<endl;
   }
   //front and last element in the vector
   cout<<student_height.front()<<endl;
   cout<<student_height.back();
   
  // cout<<size;
   
}

