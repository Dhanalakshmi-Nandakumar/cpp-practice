#include <iostream>
using namespace std;
class default_Constructor{
int a;
public:
default_Constructor()
{
    a=100;
}
void display()
{
    cout<<"value of a "<<a;
}
};
int main() {
    //Your Code goes here!
    default_Constructor obj;
    obj.display();
    return 0;
}