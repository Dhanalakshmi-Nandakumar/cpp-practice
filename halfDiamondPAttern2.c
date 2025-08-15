#include <stdio.h>
void  halfDiamondPattern(int n)
{
    for(int row=1;row<=2*n-1;row++) //6<=9
    {
        int star=0;
        if(row<=n){ //6<=5
            star=row; //star=5
        }
        else{
            star=2*n-row;//6-1 
        }
        for(int col=1;col<=star;col++) //1<=5
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
    // halfDiamondPattern2(n-1);
    }
    return 0;
}