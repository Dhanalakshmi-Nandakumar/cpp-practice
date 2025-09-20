#include <bits/stdc++.h>
using namespace std;

int main() {
    //open & reading a file
    ifstream file("demo.txt");
    if(!file)
      cerr<<"\nfile did not open"<<file.rdstate();
    else
      cout<<"\nfile opened successfully!";
    cout<<"\nchecking good() "<<file.good(); //not good- it give zero
     cout<<"\nchecking bad() "<<file.bad();
     cout<<"\nchecking fail() "<<file.fail();
cerr<<"\nfile did not  open so state is "<<file.rdstate();
    return 0;
}