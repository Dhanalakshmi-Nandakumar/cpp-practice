#include <bits/stdc++.h>
using namespace std;

int main() {
    //Your Code goes here!
    //way of declaration for pair
    //pair<int,char> pr={80,'D'};
    pair <int,char> pr;
    pr=make_pair(78,'j');
    cout<<pr.first<<"  ";
    pr.second='S';
    cout<<pr.second<<endl;
    pair < pair<int,char>,int> nestedPr={{99,'U'},800};
    //since its nested  pair we cannot access like this we need to exactly tell compilter go to first pair->take first one {nestedPr.first.first}
     //cout<<nestedPr.first<<endl;
    cout<<nestedPr.second<<endl;//800
    cout<<"nested pr second "<<nestedPr.first.second<<endl;
cout<<"nested pr first "<<nestedPr.first.first;

    return 0;
}