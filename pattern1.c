#include <stdio.h>
int main() {
    //Your Code goes here!
    // 1 2 3 4 5
    // 2 3 4 5 1
    // 3 4 5 1 2
    // 4 5 1 2 3
    // 5 1 2 3 4
    int n;
    printf("Enter n value \n");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=row;col<=n;col++) 2<=5
        {
            printf("%d ",col); //1 2 3 4 5 
        }
        for(int col=1;col<row;col++)//1<2
        printf("\n");
    }
    
    return 0;
}