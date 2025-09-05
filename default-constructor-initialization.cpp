#include <iostream>
using namespace std;

class Test {
    int m_Val{};   // no in-class initializer this time
public:
    // Default constructor (compiler-generated)
    // Test() : m_Val{0} {   
    //     // same as writing m_Val = 0; but done more efficiently
    // }

    Test()=default;

    void print() {
        cout << m_Val << "\n";
    }
};

int main() {
    Test t1;     // calls default → m_Val = 0
    t1.print();  // prints 0
    
}
