#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
//parameterized constructor
    Rectangle(int l=0, int b=0) {
        length = l;
        breadth = b;
        cout << "Constructor called with (" << length << "," << breadth << ")\n";
    }
};

// A dummy function to show the "most vexing parse"
Rectangle r5() {
    return Rectangle(100, 200);
}

int main() {
    cout << "Case 1: Rectangle r1;\n";
    Rectangle r1;  //  Object created, calls Rectangle(0,0)

    cout << "Case 2: Rectangle r2{};\n";
    Rectangle r2{}; //  Object created, uniform init, calls Rectangle(0,0)

    cout << "Case 3: Rectangle r3(5, 10);\n";
    Rectangle r3(5, 10); //  Object created, calls Rectangle(5,10)

   
    cout << "Case 5: Rectangle r5();\n";
    Rectangle r5(); //  This is NOT an object, this declares a FUNCTION r5 returning Rectangle
                    // Most vexing parse (no constructor call)

    cout << "Case 6: auto r6 = dummy();\n";
    auto r6 = r5(); //  Calls dummy(), which calls Rectangle(100,200)
}
