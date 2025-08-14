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
     for(int row=1;row<=n;row++)
     {
        for(int col=1;col<=row;col++)
        {
            printf("%d ",row);
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
    numberPattern2(n);
}
    return 0;
}