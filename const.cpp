#include <iostream>
using namespace std;
class Sum
{
    public:
    int a;
   int add(int x,int y)const;
};
int Sum::add(int x,int y)const 
{
     //a++; cannot chnage the class data member
     return x+y;

}
int main() {
    Sum obj;
    cout<<obj.add(6,7);
    return 0;
}