#include <iostream>
using namespace std;

int main() {
    int arr[]={1,3,45,5,6,6,6,7,8,9,9,2,2,2,2,2};
    int last_duplicate=0;     
    int i=0,j=0;
    int n=sizeof(arr)/sizeof(int); 
    cout<<"size of array "<<n<<endl;
     for(;i<n-1;i++)
     { 
        if(arr[i]==arr[i+1]  )
        {
            j=i;
            while(arr[i]==arr[j])j++;
            cout<<"duplicate element "<<arr[i]<<"number of times "<<j-i<<" appeared"<<endl;
            i=j-1;
        }
   }


    return 0;
}