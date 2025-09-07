#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
int main() {
    //Your Code goes here!
    int *p,i=0;
    //c style allocation heap memory to array
   // p=(int*)malloc(5*sizeof(int));
    //c++ style allocation heap memory to array
    p=new int[5];
    p[0]=90;
    p[1]=190;
    p[2]=200;
    for(;i<5;i++)
    {
        cout<<p[i]<<" "; //pointer is an array of name
    }
   // delete [] p; //whenever we allocate memry need to freed up  c++
   free(p); 
    cout<<"after freed trying to access "<<endl;
    i=0;//reset
     for(;i<5;i++) //undefined behaviour will get random values or error
    {
        cout<<p[i]<<" "; //pointer is an array of name
    }
    return 0;
}