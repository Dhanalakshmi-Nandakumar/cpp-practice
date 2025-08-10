// *p --when we use *p in expression it decays to &arr[0] ,
// since we hold the whole array in *p ,
//  printing %d give error - we need to use %p to access the address of *p -> &arr[0]

#include <stdio.h>

void showDecay(int (*p)[5]) {
    // Here 'arr' is actually a pointer (int*), because of decay
    printf("Inside function:\n");
    // printf("  sizeof(arr) = %zu (size of int*)\n", sizeof(p));
    // printf("  arr points to address %p\n", (void*)p);
    for(int i=0;i<5;i++)
    {
        printf("%d ",);
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    //here arr or &arr or &arr[0]-->hold the address of first element in the array
    
    printf("%p\n%p\n%p\n%p\n%p",&arr,&arr[0],arr,arr+1,arr+2);

   
    
    // 1. sizeof — No decay happens
    printf("sizeof(arr) = %zu (size of 5 ints)\n", sizeof(arr));
    
    // 2. Decay when assigned to a pointer
    int (*p)[5] = &arr; // arr decays to &arr[0]
    printf("p (pointer) = %p, *p = %p\n", (void*)p, *p[0]);
    
    // 3. Decay when used in expressions
    printf("*(arr + 2) = %d (3rd element)\n", *(arr + 2));
    
    // 4. No decay with & operator
    printf("&arr (pointer to whole array) = %p\n", (void*)&arr);
    printf("&arr[0] (pointer to first element) = %p\n", (void*)&arr[0]);
    
    // 5. Passing to function → decay happens
    showDecay(&arr);
    
    return 0;
}


