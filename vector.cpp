#include<vector>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   //DECLARATION AND INITIALIZATION

// Method 1: Empty vector
vector<int> vec1;

// Method 2: Size with default value (5 zeros)
vector<int> vec2(5);  

// Method 3: Size with specific value (5 tens)
vector<int> vec3(5, 10); 

// Method 4: Initializer list (C++11)
vector<int> vec4 = {1, 2, 3, 4, 5};

// Method 5: From array
int arr[] = {10, 20, 30};
vector<int> vec5(arr, arr + 3);

// Method 6: Copy constructor
vector<int> vec6(vec4);
   vector <int> student_height(10,40);
//    int size=student_height.size();
   student_height.push_back(8);
   student_height.push_back(80);
   student_height.push_back(18);
   sort(student_height.begin(),student_height.end());
    student_height.pop_back();
   
    for(auto it=vec6.begin();it!=vec6.end();it++)
   {
      
       cout<<*it<<endl;
   }
   //front and last element in the vector
   cout<<student_height.front()<<endl;
   cout<<"no bounds checked"<<student_height[20]<<endl;
    cout<<" bounds checked"<<student_height.at(20)<<endl;
   cout<<student_height.back();
   
  // cout<<size;
   
}

