#include <stdio.h>
int main()
{
   int a = 300;    
   char *b = (char *)&a;
   *++b = 2;
   printf("%d ",a);
   return 0;
}