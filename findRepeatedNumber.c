#include <stdio.h>
int main() {
    //Your Code goes here!
    int number,rem=0;
     printf("enter a number ): ");
    scanf("%d",&number); //68991
   int seen[10]={0}; //  {0,1,0,0,0,0,0,1,1}
   while(number>0)  //68891 6889 688 68
   {
    rem=number%10; //8
    if(seen[rem]==1)
      break;
    seen[rem]=1;
    number/=10; //68
   }
   if(number>0)
     printf("yes , there is repetition in number ): ");
   else
     printf("yes , there is no repetition in number ): ");
   
    return 0;
}