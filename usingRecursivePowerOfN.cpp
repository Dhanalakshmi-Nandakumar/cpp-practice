#include <iostream>
using namespace std;
long long calculatingPower(long long base, int exponent)
{
     if(exponent==0)
      return 1; //base^exponent=  2^0=1
     return base*calculatingPower(base,exponent-1);
}
int main() {
    long long base_input;

    int exponent_input;
    cout<<"Enter the input for base and exponent ";
    cin>>base_input>>exponent_input;

    long long result=calculatingPower(base_input,exponent_input);
    cout<<"\n Result of "<<base_input<<" ^"<<exponent_input<<" is  "<<result;

    return 0;
}