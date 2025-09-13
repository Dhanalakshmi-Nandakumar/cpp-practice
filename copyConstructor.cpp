#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = breadth = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        cout << "Parameterized constructor called with values: " << l << " " << b << endl;
    }

    // Copy constructor
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
        cout << "Copy constructor called, copied values: " << length << " " << breadth << endl;
    }
};

int main()
{
    Rectangle r1;        // Calls default constructor
    Rectangle r2(8, 9);  // Calls parameterized constructor
    Rectangle r3(r2);    // Calls copy constructor

    // Note: Rectangle r4(); is not an object.
    // It is treated as a function declaration (most vexing parse issue).

    return 0;
}
