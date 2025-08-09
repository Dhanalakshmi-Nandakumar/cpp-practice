#include <stdio.h>
int main() {
    //Your Code goes here!
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

    // for(int row=0;row<5;row++)
    // {
    //         int sumOfRow=0,sumOfCol=0;
    //     for(int col=0;col<5;col++)
    //     {
    //           sumOfRow+=arr[row][col];
              
    //     }
    //     printf("%d ",sumOfRow);
        
        
    // }
     for(int row=0;row<5;row++)
    {
            int sumOfCol=0;
        for(int col=0;col<5;col++) //11
        {
              sumOfCol+=arr[col][row];  //8
              
        }
        printf("%d ",sumOfCol);
        
        
    }
    return 0;
}