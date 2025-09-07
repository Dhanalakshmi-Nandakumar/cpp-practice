#include <bits/stdc++.h>
using namespace std;
//by default array is pass by adress in both c and c++
//here fn is modifying the actual parameter
void fun(int arr[],int size)// arr[]->pointing to array very specific
// void fun(int *arr,int size)  ->pointing to one integer or array of element 
{
    arr[4]=1900;
}
int main() {
    //Your Code goes here!
    int arr[5]={10,2,3,4,5};
    fun(arr,5);
    cout<<arr[4];
    return 0;
}