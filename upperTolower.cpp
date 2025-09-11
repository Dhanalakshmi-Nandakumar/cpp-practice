#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char msg[]="WELCOME";
    int i=0;
    while(msg[i]!='\0')
    {
        //msg[i]=msg[i]-32;   //uppercase
        msg[i]=msg[i]+32;//LOWERCASE
        i++;
    }
    cout<<msg;
    return 0;
}