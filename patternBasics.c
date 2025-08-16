#include <stdio.h>
void rightAngleReverse(int n)
{
    // *****
    // ****
    // ***
    // **
    // *
    for(int row=1;row<=n;row++)
    {
      for(int col=1;col<=n-row+1;col++)
    {
        printf("*");
    } 
     printf("\n"); 
    }
}
void rightAngle(int n)
{
     // *
    // **
    // ***
    // ****
    // *****
    for(int row=1;row<=n;row++)
    {
      for(int col=1;col<=row;col++)
    {
        printf("*");
    } 
     printf("\n"); 
    }
}
void rightAngleNumber(int n)
{
  
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for(int row=1;row<=n;row++)
    {
      for(int col=1;col<=row;col++)
    {
        printf("%d",col);
    } 
     printf("\n"); 
    }
}
void halfRightAngle(int n)
{
  //   *
//     **
//     ***
//     ****
//     *****
//     **** n=5, row=6 2n-row    10-
//     ***
//     **
//     *
   
    for(int row=1;row<=(2*n)-1;row++)
    {
        if(row<=n)
        {
           for(int col=1;col<=row;col++)
           {
            printf("*");
           }
        }
        else
        {
             for(int col=1;col<=(2*n)-row;col++)
           {
            printf("*");
           } 
        }
        printf("\n"); 
       
    }   
}
void rightAngleWithGap(int n)
{
    // 6.   *
    //     **
    //    ***
    //   ****
   //   *****
   for(int row=1;row<=n;row++)
   {
    for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=row;col++)
           {
            printf("*");
           }

    printf("\n");
   }
}
void rightAngleReverseWithGap(int n)
{
    //  *****
    //   ****
    //    ***
    //     **
    //      *

   for(int row=n;row>=1;row--)
   {
    for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=row;col++)
           {
            printf("*");
           }

    printf("\n");
   }
}
void halfDiamondReverse(int n)
{
    

   for(int row=n;row>=1;row--)
   {
    for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=2*row-1;col++)
           {
            printf("*");
           }

    printf("\n");
   }
}
void halfDiamond(int n)
{
    // 8.  *
    //    ***
    //   *****
    //  *******
    // *********

   for(int row=1;row<=n;row++)
   {
    for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=2*row-1;col++)
           {
            printf("*");
           }

    printf("\n");
   }
}

void diamondWithGap(int n)
{
    // 10.  *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=row;col++)
    {
       printf("* ");  
    }
    printf("\n");
    
    }
}
void diamondReverseWithGap(int n)
{
    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *
    for(int row=n;row>=1;row--)
        {
        for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
    for(int col=1;col<=row;col++)
    {
       printf("* ");  
    }
    printf("\n");
    
    }
}
// void realDiamond(int n)
// {
//     // 10.  *
//     //     * *
//     //    *   *
//     //   *     *
//     //  *********       
//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//     {
//         printf(" ");
//     }
//     for(int col=1;col<=1;col++)
//     {
//        printf("*");
//         for(int space=0;space<2*n-1;space++)
//     {
//         printf(" ");
//     }
//     printf("*");
        
//     }
//     printf("\n");
    
//     }
// }


int main() {
    //Your Code goes here!

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
         int n;
         printf("Enter number ");
         scanf("%d",&n);
        //  rightAngle(n);
        //  rightAngleReverse(n);
        //  rightAngleNumber(n);
         //halfRightAngle(n);
        //  rightAngleWithGap(n);
        //  rightAngleReverseWithGap(n);
        // halfDiamond(n);
        // halfDiamondReverse(n);
        
        // diamondReverseWithGap(n);
        // diamondWithGap(n);
        //realDiamond(n);

    }  

    return 0;
}