#include<stdio.h>
void mystery(int ptra, int ptrb)  //ptra=0,ptrb=4
{
   int temp;
   temp = ptrb; 
   ptrb = ptra;
   ptra = temp;
}
int main() 
{
    int a=2016, b=0, c=4, d=42;
    mystery(&a, &b);
    if (a < c) // 0<4
       mystery(&c, &a); //4 a-0
    mystery(&a, &d); //4 42
    printf("%d", a);
}