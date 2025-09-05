#include <iostream>
using namespace std;

class Test {
    int m_Val;
public:
    // Constructor using initializer list--single step initialization_
    Test(int x) : m_Val{x} {   
        cout << "Initialized with initializer list\n";
    }

    // Constructor using assignment-- double step for initialization
    Test(double num) {
        m_Val = static_cast<int>(num);
        cout << "Initialized with assignment\n";
    }

    void print() {
        cout << m_Val << "\n";
    }
};

int main() {
    Test t1(42);    // calls int version → initializer list
    t1.print();     

    Test t2(12.67);  // calls double version → assignment
    t2.print();     
}
