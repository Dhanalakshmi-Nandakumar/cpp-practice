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
    }
   
    return 0;
}