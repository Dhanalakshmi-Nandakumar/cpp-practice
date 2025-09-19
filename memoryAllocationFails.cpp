#include <iostream>
using namespace std;

int main() {
    
    try
    {
        int *ptr=new int[2000000000000];
        throw bad_alloc();

    }
    catch(const exception& e)
    {
        cerr<<"\nmemory allocation failed "<<e.what();
    }
   cout<<"\nprogram end...";
    return 0;
}