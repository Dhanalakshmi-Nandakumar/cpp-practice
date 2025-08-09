#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
     printf("enter a number ): ");
    scanf("%d",&number); //68991
    int count=0, rem=0;
    while(number!=0)
    {
        rem=number%10; //1
        count++; //1
        number/=10; 
    }
    if(number==0)
    {
        printf("Can u please enter a valid number to test");
    }
    printf("%d",count);
   
    return 0;
}