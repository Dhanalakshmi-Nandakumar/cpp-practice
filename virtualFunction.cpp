#include <iostream>
using namespace std;
class BasicCar{
 public:
 virtual void display()
 {
    cout<<"fun of basicCar";
 }
};
class AdvancedCar:public BasicCar
{
public:
 void display()
 {
     cout<<"fun of DerivedCar";
 }
};
int main() {
    BasicCar *ptr=new AdvancedCar();
    ptr->display();
    return 0;
}