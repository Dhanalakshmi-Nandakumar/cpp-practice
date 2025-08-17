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
void rightAngleReverseWithNumber(int n)
{
    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1  
    
    for(int row=1;row<=n;row++)
    {
      for(int col=1;col<=n-row+1;col++)
    {
        printf("%d ",n-row+1);
    } 
     printf("\n"); 
    }
}
void rightAngleReverseWithNumber2(int n)
{
//    i1 2 3 4 5
//     1 2 3 4 
//     1 2 3
//     1 2 
//     1     
    
    for(int row=1;row<=n;row++)
    {
      for(int col=1;col<=n-row+1;col++)
    {
        printf("%d ",col);
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
   
    // for(int row=1;row<=(2*n)-1;row++)
    // {
    //     if(row<=n)
    //     {
    //        for(int col=1;col<=row;col++)
    //        {
    //         printf("*");
    //        }
    //     }
    //     else
    //     {
    //          for(int col=1;col<=(2*n)-row;col++)
    //        {
    //         printf("*");
    //        } 
    //     }
    //     printf("\n"); 
       
    // }   

     for(int row=1;row<=(2*n)-1;row++)
    {
        int printValue=(row<=n)?row:(2*n)-row;
        
           for(int col=1;col<=printValue;col++)
           {
            printf("*");
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
    // *********
    //  *******
    //   *****
    //    ***
    //     * 
     int printValue=2*n-1;
    for(int row=1;row<=n;row++)
    {
       
        for(int space=1;space<=row-1;space++)
        {
            printf(" ");
        }
        for(int col=1;col<=printValue;col++)
        {
           printf("*");
        }
        printValue-=2;
        printf("\n");
    }

//    for(int row=n;row>=1;row--)
//    {
//     for(int space=1;space<=n-row;space++)
//     {
//         printf(" ");
//     }
//     for(int col=1;col<=2*row-1;col++)
//            {
//             printf("*");
//            }

//     printf("\n");
//    }
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
void realDiamond(int n)
{
    // 10.  *
    //     * *
    //    *   *
    //   *     *
    //  *********       
   
   for(int row=1;row<=n;row++)
   {
    for(int space=1;space<=n-row;space++)
    {
        printf(" ");
    }
   
    for(int col=1;col<=2*row-1;col++)
        {
           if(col==1 || row==n || col==2*row-1)
            {
              printf("*");
            }   
        
        else{
            printf(" ");
        }
        }

    printf("\n");
   }
    
    
}
void numberPattern(int n)
{
    //    1
    //    2  3
    //    4  5  6
    //    7  8  9  10
    //    11 12 13 14 15
    int num=1;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

}
void numberFlipPattern1(int n)
{
// 22.    1
//        0 1
//        1 0 1
//        0 1 0 1
//        1 0 1 0 1
    
    for(int row=1;row<=n;row++)
    {
        int printNum=(row%2==0)?0:1;
        for(int col=1;col<=row;col++)
        {
            printf("%d ",printNum);
            printNum=!printNum;
            
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
          halfDiamondReverse(n);
         rightAngle(n);
         rightAngleReverse(n);
         rightAngleReverseWithNumber(n);
         rightAngleNumber(n);
         halfRightAngle(n);
         rightAngleWithGap(n);
         rightAngleReverseWithGap(n);
        halfDiamond(n);
       
        
        diamondReverseWithGap(n);
        diamondWithGap(n);
        realDiamond(n);
        numberPattern(n);
        numberFlipPattern1(n);
        rightAngleReverseWithNumber2(n);

    }  

    return 0;
}