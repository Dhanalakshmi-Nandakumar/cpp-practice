#include <iostream>
using namespace std;

class Outer {
private:
    int p;              // private instance member (Outer only)

public:
    static int a;       // static member of Outer
    int x;              // public instance member of Outer

    void showOuterClass() {
        i.show();       // call Inner’s show()
        p = 90;
        cout << "\n p value is " << p;
    }

    // Nested class
    class Inner {
    public:
        void show() {
            cout << "calling from inner class..\n";
            cout << "Accessing static data of outer class using class name  " << Outer::a;
        }
    };

    Inner i; // instance of Inner inside Outer
};

int Outer::a = 10;

int main() {
    //  You can create an object of Inner directly
    Outer::Inner obj;
    obj.show();

    // cout << obj.x; -->  ERROR: x belongs to Outer, not Inner

    // cout << obj.a; -->  ERROR: a is static member of Outer, not Inner

    //  Create Outer object
    Outer obj1;
    obj1.showOuterClass();

    return 0;
}
