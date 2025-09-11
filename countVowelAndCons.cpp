#include <bits/stdc++.h>
using namespace std;

int main() {
    //Your Code goes here!
    char name[100];
    cin.getline(name,100);
    int i=0,vcount=0,ccount=0,space=0;
    for(;name[i]!='\0';i++)
    {
      if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||
      name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
      {
        vcount++;

      }
      else if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122) 
      {
         ccount++;
      }
     
      else
      {  
        space++;
      }
    }
    cout<<"number of vowel count is "<<vcount<<endl<<"number of consonant count is "<<ccount<<endl<<"number of special character count is "<<space<<endl;
    return 0;
}