#include <bits/stdc++.h>
using namespace std;

int main() {
    char name[1000];
    cout<<"enter you sentences will let you know the count of word ): ";
    cin.getline(name,1000);
    int i=0,space=0;
    while(name[i]!='\0')
    {
        if(name[i]==' '&& name[i-1]!=' ')
        {
             space++;
        }
        i++;
    }
    cout<<"length of the string is "<<space+1;


    return 0;
}