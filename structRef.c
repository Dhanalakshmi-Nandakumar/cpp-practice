#include <stdio.h>
#include <string.h>
struct emp
{
    char name[10];
    int age;
};
void fun(struct emp *ptr)
{
    printf("%s,%d",ptr->name,ptr->age);
}

int main() {
    
    struct emp obj={"dhana",22};
    fun(&obj);
    return 0;
}