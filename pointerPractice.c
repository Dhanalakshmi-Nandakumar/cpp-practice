#include <stdio.h>
void fun()
{
    printf("hello");
}
int main()
{
    void (*ptr)()=fun;
    //(*ptr)();
    ptr();
    return 0;
}
