#include <bits/stdc++.h>
using namespace std;

int main() {
    //declaration
    const int MAX=100;
    char buffer[MAX];
   //ofstream fp("demo.txt");
   //open file and write data 
   ofstream fp;
   fp.open("demo.txt",ios::out);
   fp<<"this is first line  "<<endl;
   fp<<"this is second line  "<<endl;
   fp<<"this is third line  "<<endl;
   fp<<"this is fourth line  "<<endl;
   fp.close();
   ifstream read("demo.txt",ios::in);
//    while(!read.eof())
// while(read.good())
//while(read.getline(buffer,100))
while(read)
   {
       read.getline(buffer,100);
       cout<<buffer;
       cout<<endl;
   }
   cout<<"\nend of file reached..";
   read.close();

    return 0;
}