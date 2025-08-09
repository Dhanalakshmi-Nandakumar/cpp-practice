#include <stdio.h>
int main() {
    //Ascending order

    //int arr[] = {5, 3, 1, 4, 2}; //n=5
    int arr[n];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //int arr[]={10,20,30,40,50};
    int temp,swap,size,count=0;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    for(int i=0;i<size-1;i++)// 0<4
    {
        printf("pass  : %d\n",i+1);
        swap=0;
        for(int j=0;j<size-i-1;j++) //3<4
        {
            if(arr[j]>arr[j+1]) // {3,1,4,2,5}
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               swap=1;
            }

        }
        for(int k=0;k<size;k++)
        {
        printf("%d ", arr[k]);
        }
        printf("\n");
        if(swap==0)
        {
            printf("it's already sorted...):");
            break;  
        }
         

    }
    return 0;
   

}