#include <iostream>
using namespace std;
class Friend
{
  private:
    int data;
  public:
  friend string greeting();
};
string greeting()
{
    return "hello..i'm your friend ):";
}
int main() {
    
    Friend person;
    //cout<<person.greeting(); //error since greeting() is not member of Friend class
    cout<<greeting();
    return 0;
}