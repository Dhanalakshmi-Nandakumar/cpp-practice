// #include <iostream>
// using namespace std;

// int main() {
//     int  arr[]={12,34,56,78,90};
//     cout<<arr<<endl;
//     cout<<&arr[0];

//     return 0;
// }

 #include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  	int arr[5] = { 1, 2, 3, 4, 5 };
  	int n = sizeof(arr) / sizeof(arr[0]);

    // Defining the pointer to first element of array
    int* ptr = &arr[0];

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    // Traversing array using pointer arithmetic
    for (int i = 0; i < 5; i++)
        printf("%d ",*ptr[i+1]);
    return 0;
}