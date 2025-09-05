#include <iostream>
using namespace std;
class constructor_overloading
{
int num;
public:
constructor_overloading()
{
    num=100;
    cout<<"default value is "<<num<<endl;
}
constructor_overloading(int default_val)
{
    num=default_val;
    cout<<"constructor overloading value is "<<num;
}
};
int main() {
    //Your Code goes here!
    constructor_overloading obj(90);
    constructor_overloading obj1;
    
    return 0;
}