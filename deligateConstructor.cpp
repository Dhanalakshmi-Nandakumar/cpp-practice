#include <iostream>
using namespace std;
//DELEGATE CONSTRUCTOR
//Same code runs(code reusbale), but separate memory blocks → separate objects.

//Each object is independent.
class Rectangle {
private:
    int length;
    int breadth;

public:
    
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Rectangle initialized with length=" << length 
             << " breadth=" << breadth << endl;
    }

    
    Rectangle() : Rectangle(l, 10) { // default breadth = 10
        cout << "Delegated constructor called\n";
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1(5, 7);   
    Rectangle r2(6);      // calls delegated constructor

    cout << "Area r1: " << r1.area() << endl;
    cout << "Area r2: " << r2.area() << endl;

    return 0;
}
