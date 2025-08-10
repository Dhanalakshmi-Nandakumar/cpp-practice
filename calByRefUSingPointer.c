#include <stdio.h>

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapByValue(int *val1,int *val2)
{
    int *temp;
    temp=val1; //here temp points where val1 points to but it does not change the value  5
    val1=val2; //10
    val2=temp; //5 
}

int main() {
    int x = 5, y = 10;
    swap_by_reference(&x, &y);
    //swapByValue(&x, &y);
    printf("After swap_by_reference: x=%d, y=%d\n", x, y);  // Values swapped
    return 0;
}