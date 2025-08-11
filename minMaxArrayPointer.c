#include <stdio.h>
void min_and_max_using_pointer(int *ptr,int n,int *min,int *max)
{
    //since ptr is type of int * we can use p[1] or p[0]
    //avoid when pointer is to array of size 5 i.e int (*ptr)[5]
    //this case u cannot use p[1] to access the second element since that type is of calculating 5int when we move the pointer it move forward of 5size int 
    *min=ptr[0],*max=ptr[0];

     printf("Finding min and max of value in array using ptr\n");
     
     for(int i=0;i<n;i++)
     {
        
        if(*(ptr+i)<*min)
        {
            // *min=*(ptr+i);
            *min=ptr[i];
        }
        if(*(ptr+i)>*min)
        {
             {
            // *max=*(ptr+i);
            *max=ptr[i];
        }
        }
     }
     printf("\n");
}
void min_and_max_using_array_variable(int arr[],int n,int *min,int *max)
{
    //since ptr is type of int * we can use p[1] or p[0]
    //avoid when pointer is to array of size 5 i.e int (*ptr)[5]
    //this case u cannot use p[1] to access the second element since that type is of calculating 5int when we move the pointer it move forward of 5size int 
     printf("Finding min and max of value in array using parray variable\n");
    *min=arr[0],*max=arr[0];
     
     for(int i=0;i<n;i++)
     {
        
        if(*(arr+i)<*min)
        {
            // *min=*(arr+i);
            *min=*(arr+i);
        }
        if(*(arr+i)>*min)
        {
             {
            // *max=*(arr+i);
            *max=*(arr+i);
        }
        }
     }
}
int main() {
    //Your Code goes here!
     int arr[]={100,-9,2,20,30,40,50,60};
     int n=sizeof(arr)/sizeof(int);
     int min,max;
     //min_and_max_using_pointer(arr,n,&min,&max);
    min_and_max_using_array_variable(arr,n,&min,&max);
     printf("%d %d",min,max);
    return 0;
}