
    //Descending order...
    #include <stdio.h>
int main() {
    //Your Code goes here!

    //int arr[] = {5, 3, 1, 4, 2}; //n=5
   // int arr[]={10,20,30,40,50};
    int temp,swap,size,count=0;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    for(int i=0;i<size-1;i++)// 0<4
    {
        printf("pass  : %d\n",i+1);
        swap=0;
        for(int j=0;j<size-1-i;j++) //3<4
        {
            if(arr[j]<arr[j+1]) // {3,1,4,2,5}
            {
              temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               swap=1;
               count++;
            }

        }
        for(int k=0;k<=size-1;k++)
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
    printf("\n No of swapping occurs %d ",count);
    return 0;
   

}


  