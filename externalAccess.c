#include <stdio.h>

void fun(int arr[])

{
      //int arr[]={10,20,30,40,50};
     int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++)
     {
        printf("%d  ",arr[i]);
     }
}

int main() {
    //Your Code goes here!
     int arr[]={10,20,30,40,50};
     int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++)
     {
        printf("%d  ",arr[i]);
     }
     printf("%d",size);
     fun(arr);

    return 0;
}