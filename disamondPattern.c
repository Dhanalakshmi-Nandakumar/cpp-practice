#include <stdio.h>
void   diamondPattern(int n)
{
    for(int row=1;row<=n;row++) //4
    {
        for(int gap=1;gap<=n-row;gap++) //1<=4-1 2<=3
           {
         printf(" ");  // gap gap gap 
            }
       for(int col=1;col<=row*2-1;col++) //1< =1
         {
           printf("*");
         } 
   for(int gap=1;gap<=n-row;gap++)
    {
        printf(" ");
    }
    printf("\n");
    }
}
void reverseDiamondPattern(int n)
{
    for(int row=n;row>=1;row--) //3>=1
    {
        for(int gap=1;gap<=n-row;gap++)// 1<=4-3 1<=1
        {
           printf(" ");
        }
         for(int col=1;col<=row*2-1;col++) // 2<=5
       {
           printf("*");
       } 

         for(int gap=1;gap<=n-row;gap++) //1<=0
        {
         printf(" ");
        }
        printf("\n");

    }
}
int main() {
    //Your Code goes here!
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
         int n;
         printf("Enter number ");
         scanf("%d",&n);
          diamondPattern(n);
        reverseDiamondPattern(n);
    }
   
    return 0;
}