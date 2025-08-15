#include <stdio.h>
int main() {
    //Your Code goes here!
    //1
    //0 1
    //1 0 1
    //0 1 0 1
    //1 0 1 0
    //how to approach if we look 
    // All even digit start with 1 and its flip and it print to row times
    void flipOne(int n)
    {
        int start=0;
       for(int row=0;row<n;row++)
       {
          if(row%2==0)
          {
            start=1;
          }
          else{
            start=0;
          }
          for(int col=0;col<=row;col++) //1<=2
          {
            printf("%d ",start); //1
            start=1-start; //0
           

          }
          printf("\n");
       }
    }
     int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
         int n;
         printf("Enter number ");
         scanf("%d",&n);
         flipOne(n);
    
    }
    return 0;
}