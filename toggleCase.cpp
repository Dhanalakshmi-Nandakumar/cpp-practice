#include <bits/stdc++.h>
using namespace std;

int main() {
    //Your Code goes here!
    char name[100];
    cin.getline(name,100);
    int i=0;
    for(;name[i]!='\0';i++)
    {
      if(name[i]>=65 && name[i]<=90)
      {
        name[i]=name[i]+32;
      }
      else if(name[i]>=97 && name[i<=122])
      {
        name[i]=name[i]-32;
      }
      else
      {
        name[i]='-';
      }
    }
    cout<<name;
    return 0;
}