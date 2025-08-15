#include <stdio.h>
void reverseTriangle(int n)
{
     for(int row=0;row<n;row++)
     {
        for(int col=0;col<n-row;col++)
        {
            printf("*"); //0<5-4
        }
        printf("\n");
     }
}
void starPattern(int n)
{
//     *     row 1--> 0--1   4 n-row-2
//    ***    row 2--> 1--3   4 4-2-2 
//   *****   row 3--> 2   5
//  *******  row 4--> 3   7
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
// **** row=0 4  n-i 
// ***  row=1 3
// **   row=2 2
// *    row=3 1 4-1
int t;
scanf("%d",&t);

for (int i=0;i<t;i++)
{
    int n;
   scanf("%d",&n);
   starPattern(n);
   //reverseTriangle(n);
   //squarePattern(n);
}
    return 0;
}