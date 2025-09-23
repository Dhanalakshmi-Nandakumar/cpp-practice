#include <bits/stdc++.h>
using namespace std;
int countAlphabet()
{
      char ch;
      int countAlpha=0;
      int countAlphaNum=0;
      ifstream readFile("content.txt");
      while(readFile.get(ch))
      {
          if(isalpha(ch))
          {
             countAlpha++;
          }
      }
      readFile.close();
      ifstream readFile1("content.txt");
        while(readFile1.get(ch))
      {
          if(isalnum(ch))
          {
             countAlphaNum++;
          }
      }
      readFile1.close();
      cout<<"\nnumber of alphanumeric in the file "<<countAlphaNum;
      return countAlpha;
}
int main() 
{
    ofstream writeFile("content.txt");
    string info="\nhi dhanalakshmi, are you looking for software developer job here89 90577 ";
    for(int i=0;i<info.size();i++)
       {
          writeFile.put(info[i]); 
       }
    writeFile.close();
    cout<<"\nfile closed successfully\n";
    cout<<"\nNumber of alphabet in the file  "<<countAlphabet();
    return 0;
}