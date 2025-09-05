#include <iostream>
using namespace std;
class para_constructor
{
 int age;
 public:
 para_constructor(int val)
 {
     age=val;
 }
 void display()
 {
    cout<<age;
 }
};
int main() {
    //Your Code goes here!
    para_constructor obj(22);
    obj.display();
    return 0;
}