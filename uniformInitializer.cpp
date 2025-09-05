#include <bits/stdc++.h>
using namespace std;

void print(initializer_list <int> list)
{
    
    //initializer_list <int>::iterator it=list.begin();  //explicitly defining iterator
    //auto it// undefined behaviour always initialize
    // auto it=list.begin();
    // while(it!=list.end())
    // {
    //     cout<<*it;
    //     ++it;
    // }

    //range based for loop
    for(int val:list)
    {
        cout<<val<<"  ";
    }

}

int main() {
    int a = 10;   // copy initialization
    int b{};      // uniform initialization (C++11)
    int c;        // uninitialized local variable
    //int *ptr{};

    cout << "value of a " << a
         << "  and value of b " << b
         << "  value of c produce error " << c<<endl;
        //cout <<" value of ptr by default "<<*ptr;
    int arr[5]{11,22,33,44};
    cout<<arr[2]<<endl;
    initializer_list <int> list{111,222,3334,4444};
     print(list);
    return 0;
}
