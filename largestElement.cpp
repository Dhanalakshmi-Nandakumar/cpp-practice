#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    //using bubble sort
    int n;
     cout<<"Enter the number of size";
    cin>>n;
    int arr[n],temp,swap;
   
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //for pass
    for(int i=0;i<n-1;i++)
   
    {
         swap=0;
        cout<<"pass "<<i+1<<endl;
        for(int j=0;j<n-i-1;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
         if(swap==0)
            {
                cout<<"sorted array "<<endl;
                break;

            }
            for(int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";

            }
            cout<<endl;
    }
   // cout<<"largest element in the array "<< arr[n-1];
   int largest=arr[n-1];
    for(int i=n-2;i>0;i--)
    {
          if(arr[i]<largest)
          {
            cout<<"Second largest number "<<arr[i];
              return 0;
          }
    }
    return -1;
}