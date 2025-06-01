#include <stdio.h>
int main() {
    int num;
    printf("enter number");
    //when getting input from user always use & before variable name
    scanf("%d",&num);
    printf("%d",num);
    
    return 0;
}