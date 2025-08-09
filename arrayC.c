#include <stdio.h>
int main() {
    //Your Code goes here!
    int arr[20]={[5]=9,[7]=9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}