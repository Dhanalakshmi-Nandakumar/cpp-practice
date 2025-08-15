#include <stdio.h>
void abcPatterns(int n)
{
    //A
    //AB
    //ABC
    //ABCD
    //ABCDE
    for(int row=65;row<=n;row++)
    {
      for(int col=65;col<=row;col++)
       {
          printf("%c ",col);
       }
       printf("\n");
    }
}
void abcPatternsReverse(int n)
{
    //ABCDE
    //ABCD
    //ABC
    //AB
    //A
    for(int row=n;row>=65;row--)
    {
      for(int col=row;col>=65;col--)
       {
          printf("%c ",col);
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
         abcPatterns(n);
         abcPatternsReverse(n);
    }
    return 0;
}