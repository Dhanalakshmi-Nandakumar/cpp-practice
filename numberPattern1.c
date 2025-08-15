#include <stdio.h>
void numberPattern(int n)
{
     int space=2*(n-1);
     
    //printing lines
   for(int row=1;row<=n;row++) //0<=5
   {
   
   for(int col=1;col<=row;col++)
   {
     printf("%d",col);
   }
   //int space=0;
    for(int col=1;col<=space;col++)
   {
     printf(" ");
     
   }
   space-=2;
  // space-=2;
   for(int col=row;col>=1;col--) //2>=1
   {
     printf("%d",col);
   }
   printf("\n");
   }
}
void numberPattern2(int n)
{
   //Your Code goes here!
    //1
    //2 3
    //3 4 5
    //6  7  8  9 
    //10 11 12 13 14
    int num=1;
    for(int row=1;row<=n;row++)
    { 
      for(int col=1;col<=row;col++)//0<=3
    {
            printf("%d ",num);
            num+=1;
    }
    printf("\n");  
    }
}
  
int main() {
 
     int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
         int n;
         printf("Enter number ");
         scanf("%d",&n);
         numberPattern2(n);
         
    }
    
    return 0;
}
