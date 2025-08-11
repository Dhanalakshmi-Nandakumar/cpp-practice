// q   → [Row 0: {1,2,3}]
// q+1 → [Row 1: {4,5,6}]
// *(q+1) → points to 4 (first element of row 1)
// *(q+1)+2 → points to 6 (third element of row 1)



#include <stdio.h>
int main() {
    //Your Code goes here!
    int arr[2][3]={{1,2,3},{4,5,6}};
    int *p=&arr[0][0];
    int (*q)[3]=arr;
    printf("%d",p[4]); //5
    printf("%d",*(*(q+1)+2));// [q][1][2]=6 
    printf("%d",*(p+5));//6
    printf("%d",(*q)[1]); //2
    return 0;
}