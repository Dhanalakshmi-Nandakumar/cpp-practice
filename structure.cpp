#include <iostream>
using namespace std;
//only definition
struct Rectangle
{
   int length;
   int breadth;
   char x; // note-char allocate 4 byte but it use only 1 byte
   float y;
};
struct Rectangle r1,r2,r3;//declaration of struct variable
int main() {
    //initializing 
    struct Rectangle r={10,5};
    r.length=20;
    cout<<r.length<<"   "<<r.breadth<<endl;
    cout<<"size of "<<sizeof(r);
    return 0;
}