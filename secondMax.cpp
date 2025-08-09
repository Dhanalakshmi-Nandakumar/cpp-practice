#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ )
    {
        cin>>arr[i];
    } // [34,45,67,89,77]
    int max=INT_MIN,secondmax=INT_MIN;
    for(int i=1;i<n;i++)//3
    {
       if(arr[i]>max) //77>89
       {
        //secondmax=max; //67
        max=arr[i];//89
       }
       if(arr[i]>secondmax && arr[i]!=max)
       {
                secondmax=arr[i];   
       }
       
      
    }
    cout<<"second largest element "<<secondmax<<endl;
    cout<<"largest element"<<max;

    return 0;
}