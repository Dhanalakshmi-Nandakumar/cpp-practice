#include <bits/stdc++.h>
using namespace std;

int main() {
    //open file and write 
    ofstream file("demo1.txt");
    string info="hi just trying out new things daily";
    char ch;
    int i=0;
    while(i<info.size())
    {
       file.put(info[i]);
       i++;
    }
    file.close();
    //open file and read data
    ifstream read("demo1.txt");
    while(read)
    {
        read.get(ch);
        cout<<ch;
    }
    read.close();



    return 0;
}