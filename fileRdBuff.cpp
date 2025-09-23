#include <bits/stdc++.h>
using namespace std;
int main() {
    //writing data into file
    ofstream file("sample.txt");
    string info="\nhi this is first line\n hi this is second line";
    char ch;// to read a character
    for(int i=0;i<info.size();i++)
    {
        file.put(info[i]);
    }
    cout<<"\nfile write successfully";
    file.close();
    //reading data into file
    ifstream read("sample.txt");
    // while(read)
    // {
    //     read.get(ch);
    //     cout<<ch;
    // }
    cout<<read.rdbuf(); //alternative way to read file
    cout<<"\nfile read sucessfully";
    read.close();
    return 0;
}