#include <stdio.h>
void numberPattern(int n)
{
//1  -->inner loop printing Row times
//1 2 
//1 2 3
//1 2 3 4
//1 2 3 4 5
     for(int row=1;row<=n;row++)
     {
        for(int col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
     }
}

void numberPattern2(int n)
{
//1  -->inner loop printing Row times
//2 2  
//3 3 3
//4 4 4 4
//5 5 5 5 5
     for(int row=0;row<n;row++)
     {
        for(int col=0;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
     }
}

void numberPattern3(int n)
{
//1 2 3 4 5  -->n-row 5-1+1  4
//1 2 3 4             5-2 3
//1 2 3               5-3 2
//1 2                 5-4 1
//1                   5-5 0
     for(int row=1;row<=n;row++)
     {
        for(int col=1;col<=n-row+1;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
     }
}

int main() {


int t;
scanf("%d",&t);

for (int i=0;i<t;i++)
{
    int n;
   scanf("%d",&n);
    numberPattern3(n);
}
    return 0;
}