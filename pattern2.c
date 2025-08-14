#include <stdio.h>
void squarePattern(int n)
{
     for(int row=0;row<n;row++)
     {
        for(int col=0;col<n;col++)
        {
            printf("): ");
        }
        printf("\n");
     }
}
void trianglePattern(int n)
{
     for(int row=0;row<n;row++)
     {
        for(int col=0;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
     }
}
int main() {
    //Your Code goes here!     
// ****
// ****
// ****
// ****
int t;
scanf("%d",&t);

for (int i=0;i<t;i++)
{
    int n;
   scanf("%d",&n);
    trianglePattern(n);
   //squarePattern(n);
}
    return 0;
}