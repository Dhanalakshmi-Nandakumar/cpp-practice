#include <iostream>
using namespace std;

int main() {
    
    try
    {
        int *ptr=new int[2000000000000];

    }
    catch(exception e)
    {
        cerr<<"memory allocation failed "<<e.what();
    }
   cout<<"program end...";
    return 0;
}