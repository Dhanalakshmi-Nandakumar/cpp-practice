#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream writeFile("NUMBERS.TXT");
    if(!writeFile)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    for(int i=1;i<=100;i++)
    {
        writeFile<<i<<"   ";
    }
    cout<<"\ndata written into the file";
    writeFile.close();
    cout<<"\nfile closed";
    return 0;
}