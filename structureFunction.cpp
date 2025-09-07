#include <iostream>
using namespace std;
struct Rectangle
{
    int l,b;
};
struct Rectangle *fun() //creating a function which is type of struct rectangle
{
     struct Rectangle *d2=new Rectangle; //allocating space which is type of struct rectangle
     d2->l=90;
     d2->b=890;
     return d2; 
};
int main() {
    //Your Code goes here!
    struct Rectangle *ptr=fun();
    cout<<ptr->l<<endl<<ptr->b;
    return 0;
}