#include <stdio.h>
void  halfDiamondPattern(int n)
{
    for(int row=1;row<=n;row++) //1<=5
    {
        for(int col=1;col<=row;col++) //1<=1
        {
            printf("*");
        }
        printf("\n");
        
    }
}
void  halfDiamondPattern2(int n)
{
    for(int row=n;row>=1;row--) //5>=1
    {
        for(int col=1;col<=row;col++) //1<=5
        {
            printf("*");
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
          halfDiamondPattern(n);
     halfDiamondPattern2(n-1);
    }
    return 0;
}