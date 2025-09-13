#include <iostream>
using namespace std;

class Rectangle {
    //by default it's private
    int length, breadth;
public:
    void setLength(int l) 
    { 
        if(l>=0)
            length=l;
        else
            length=0;
         
     }
    void setBreadth(int b) { 
        breadth = b;
     }
    int area() {
         return length * breadth;
     }
};

int main() {
    Rectangle *p;          // pointer declared
    p = new Rectangle();   // memory allocated, object created

    p->setLength(-9);
    p->setBreadth(5);

    cout << "Area = " << p->area() << endl;

    delete p; // free the heap memory
    p = nullptr; //  to avoid dangling pointer

    return 0;
}
