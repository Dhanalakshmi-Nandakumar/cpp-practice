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

  
int main() {
    //Your Code goes here!
     int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
         int n;
         printf("Enter number ");
         scanf("%d",&n);
         numberPattern(n);
         
    }
    
    return 0;
}
