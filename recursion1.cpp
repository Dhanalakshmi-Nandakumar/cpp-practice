// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fun(int n) //1
{ 
    if(n>=10) //10>10
    {
        return n;
    }
    else{
        return fun(n+1);// fun(1+1)
        cout<<n<<endl;
    }
}
int main() {
    int n=1;
    fun(n);
    return 0;
}