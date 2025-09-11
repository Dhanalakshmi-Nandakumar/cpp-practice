#include <bits/stdc++.h>
using namespace std;
char tolowercase(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        return ch+32;
    }
    return ch;
}
int main() {
    char arr1[200];
    char arr2[100];
    cout<<"Enter  string1 ";
    cin.getline(arr1,200);
    cout<<"Enter  string2 ";
    cin.getline(arr2,100);
    
    int i=0;
    while((arr1[i]!='\0') &&  (arr2[i]!='\0') && (tolowercase(arr1[i])==tolowercase(arr2[i])))  //cat car
    {
          i++;
    }
    if ((arr1[i]==arr2[i])) {
        cout << "Both strings are equal";
    }
   else if((tolowercase(arr1[i])<tolowercase(arr2[i])))
    {
         cout<<arr1<<" is smaller than "<<arr2;
    }
    else
    {
       cout<<arr2<<" is smaller than "<<arr1;
    }
    return 0;
}