#include <iostream>
using namespace std;

int main() {
    /*  * * * * *
      * * * *
      * * *
      * *
      *
      */
      int arr[10]={45,78,90,77,22,89,90,98,67,6};
      cout<< "total number of size  "<<sizeof(arr)<<endl;
      cout<<"number of element in the array "<< sizeof(arr)/sizeof(arr[0]);
      cout<<endl;
      int size= sizeof(arr)/sizeof(arr[0]);
      for(int i=size;i>=0;i--)//5
      {
           for(int j=0;j<i;j++)
           {
            cout<<"* ";
           }
           cout<<endl;
      }
//for(int i=)

    return 0;
}