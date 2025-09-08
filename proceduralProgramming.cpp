#include <bits/stdc++.h>
using namespace std;

// Structure definition
struct Rectangle 
{
    int length;
    int breadth;
};

// Function to initialize values of a Rectangle
// Here we use a POINTER to structure, so we must use '->' to access members
void initialize(struct Rectangle *r, int l, int b) 
{
    r->length = l;   // using -> because r is a pointer
    r->breadth = b;
}


// Here we pass structure by VALUE (normal object), so we use '.' operator
int area(struct Rectangle r) 
{
    return r.length * r.breadth;
}

int main() {
    // Create a Rectangle object initialized to 0
    Rectangle r = {0, 0};

    int l, b;
    cout << "Enter the value of length and breadth: " << endl;
    cin >> l >> b;

    // Pass address of r since initialize expects a pointer
    initialize(&r, l, b);

    
    int val = area(r);
    cout << "Area of length and breadth is " << val << endl;

    return 0;
}
