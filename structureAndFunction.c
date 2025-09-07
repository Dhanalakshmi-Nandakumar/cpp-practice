#include <stdio.h>
struct Rectangle
{
   int length,breadth;
};
void initialize(struct Rectangle *r,int l,int b)
{
   r->length=l;
   r->breadth=b;
}
int area(struct Rectangle r)
{
   return r.length*r.breadth;
}
void changeLength(struct Rectangle *r,int l)
{
    r->length=l;
}
int main() {
    //Your Code goes here!
    struct Rectangle r;
    initialize(&r,10,20);
    printf("Before change length value is  \n");
    printf("%d",r);
    changeLength(&r,30);
    printf("Aefore change length value is  ");
    printf("%d",r);
    return 0;
}