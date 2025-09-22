#include <stdio.h>
int main() {
    union emp
    {
        int age;
        char ch[10];
    };
    //union can hold one data at a time
    union emp e={.ch="dhana"};
    union emp e1={.age=12};//here we saying inti age second
    
    printf("%s  %d",e.ch,e1.age);
    
    return 0;
}