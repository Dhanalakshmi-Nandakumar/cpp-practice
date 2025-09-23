#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream writeFile("data.txt");
    if(!writeFile)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    for(int i=1;i<=100;i++)
    {
        writeFile<<"Adhjkdkjdjk"<<endl<<"Bfhjhjdjkd"<<endl;

    }
    cout<<"\ndata written into the file";
    writeFile.close();
    cout<<"\nfile closed";
    //lets read first letter of each line 
    ifstream readLine("data.txt",ios::app);
    string line;
    char ch;
    int count=0;
    while(getline(readLine,line))
    {
        if(!line.empty() && line[0]=='B')
        count++;
    }
    cout<<"No of lines start with A are "<<count;
    return 0;
}