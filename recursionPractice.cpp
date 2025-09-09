#include <iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<"    ";//calling time printing     
        fun(n-1);
        cout<<n<<"    "; //returning time printing

    }
}

int main() {
    
    fun(3);
    return 0;
}