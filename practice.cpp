#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int myaddress=123;
    int* storeAddress=&myaddress;
    cout<<storeAddress<<endl<<&myaddress;
    cout<<"value of myaddress"<<myaddress;
    cout<<"value of store address"<<*storeAddress;
    *storeAddress=56;
    cout<<endl;
    cout<<"value of myaddress"<<myaddress;
    cout<<"value of store address"<<*storeAddress;
    int arr[2][3]={{0,1,2},{0,1,2}};
    int* ptr=arr;
    cout<<*ptr;
    return 0;
}