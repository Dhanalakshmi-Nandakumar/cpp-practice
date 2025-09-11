#include <iostream>
using namespace std;

int main() {
    char word[200];
    cin.getline(word,200);
    int i=0;
    bool flag=1;

    // for(;word[i]!='\0';i++)
    // {
    //     if (!(  (word[i]>=65 && word[i]<='Z') || (word[i]>='a' && word[i]<='z') ||   (word[i]>=48 && word[i]<=57)    ))
    //     {
    //         flag=0;
    //         break;
    //     }
    // }

    //inbuild function
    for(;word[i]!='\0';i++)
    {
        if(  !(isalnum(word[i])) )
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"correct format";
    }
    else
    {
        cout<<"not valid expression";
    }
    return 0;
}