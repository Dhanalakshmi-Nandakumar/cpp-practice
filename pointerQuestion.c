#include <stdio.h>
#define print(x) printf("%d ", x) //copy of z 12
int x;
void Q(int z) //just x copy 7
{
    z += x; //7+=5 //12
    print(z);
}
void P(int *y) //y also pointing to x 5
{
    int x = *y + 2;  x=7
    Q(x); //copying value of 5
    *y = x - 1;  //
    print(x);
}
main(void)
{
    x = 5;
    P(&x);//5
    print(x);
}
//output 12 7 6




