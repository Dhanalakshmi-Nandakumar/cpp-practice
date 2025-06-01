#include <iostream>
using namespace std;

int main() {
    // string fname="dhana",lname="lakshmi";
    // cout<<fname.append(lname)<<endl;
    // cout<<fname<<lname;
    // cout<<lname.length();
    string fname="dhana   ",lname="lakshmi";
    cout<<fname<<endl;
    fname[0]='U';
    cout<<fname<<endl;
    cout<<fname+lname<<endl;
    cout<<fname<<endl<<lname;
    //to calculate length or size of the string
    cout<<fname.length();
    cout<<fname.size()<<endl;
    //to get value from the specific index using [] or at()
    cout<<lname.at(3)<<endl;
    cout<<lname[3];
    cout<<fname<<endl;
    return 0;
}