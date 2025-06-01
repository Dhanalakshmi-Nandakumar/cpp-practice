#include <iostream>
#include <string>
using namespace std;

int main() {
    //Your Code goes here!
    string name;
    cout<<"Enter your name : ";
    cin.ignore();
    getline(cin,name);
    
    cout<<"Hello world"<<"\t"<<name;
    return 0;
}