#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    //vector take only 1 argument of same data type
    vector <int> vector3(10);  //single initialization { 0,0,0,0,0,0,0,0,0,0}
    vector <int> vect{10}; // it create only 1 element i.e 10 
    vector <int> vector1(5,3);//customize initialization {5,5,5,5,5}
    vector <int> vector2{1,2,3,4,4,5,6}; //initiazation when declaring
    vector<vector <int>> vector4;
    pair <int,char> pr;
    //vector <pair <int,int>,int> nestedVector;//wrong vector accept only one argument
    vector <pair <int,int>> vec12; 
   vector <vector<pair<int,int>>> nestedVectors;
    return 0;
}