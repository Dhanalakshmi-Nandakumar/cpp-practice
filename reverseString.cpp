#include <iostream>
using namespace std;

int main() {
    //Reversing the string 
    char word[20];
    cin.getline(word,20);
    char copy[20];
    int i=0;
   

    for(;word[i]!='\0';i++)
    {
                  
    }
    i=i-1;
    int j=0,t=0;
    // for(;i>=0;j++,i--)
    // {
    //     copy[j]= word[i];

    // }
    // copy[j]='\0';
    // cout<<copy;
    //another method to reverse without using another array variable 
    for(;i>j;j++,i--)
    {
        t=word[i];
        word[i]=word[j];
        word[j]=t;
    }
cout<<word;
    

    return 0;
}