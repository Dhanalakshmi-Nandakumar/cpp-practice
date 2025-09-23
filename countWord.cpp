#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream writeFile("myinfo.txt");
    if(!writeFile)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    for(int i=1;i<=100;i++)
    {
        writeFile<<"dhana"<<"   ";
    }
    cout<<"\ndata written into the file";
    writeFile.close();
    cout<<"\nfile closed";


    
    cout<<"\n\n Reading file to count word\n";
    ifstream readFile("myinfo.txt");
    if(!readFile)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    int count=0;
    //to count word
    string word;
   
    while(readFile>>word)
    {
            count++;
    }
    cout<<"\ntotal words are "<<count;
    readFile.close();
    cout<<"\nfile closed";

    
    //to count character
    cout<<"\n\n Reading file to count chracter\n";
    ifstream readChar("myinfo.txt");
    if(!readChar)
       cout<<"not able to open file";
    else
       cout<<"\nfile opened successfully";
    int charCount=0;
    
    char ch;
   
    while(readChar>>ch)
    {
            charCount++;
    }
    cout<<"\ntotal words are "<<charCount;
    readChar.close();
    cout<<"\nfile closed";
    return 0;
}