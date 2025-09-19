#include <iostream>
using namespace std;

int main() {
   //constant qualifier
    int value = 90;
    int * const ptr = &value;
    (*ptr)++;//here we can change the value of value
    cout<<value<<endl;
    //ptr++;//error: we are trying to change the address of ptr
    cout<<ptr<<endl;

    return 0;
}