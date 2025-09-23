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
    //reading spaces in the file
    cout<<"\n\n Reading file\n";
    ifstream readFile("NUMBERS.TXT");
    if(!readFile)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    int space=0;
    char ch;
    //cout<<readFile.eof();
    while(!readFile.eof())
    {
        ch=readFile.get();
         if(ch==' ')
            space++;
    }
    cout<<"\ntotal spaces are "<<space;
    readFile.close();
    cout<<"\nfile closed";
    return 0;
}