#include <bits/stdc++.h>
using namespace std;

// Structure definition
class Rectangle 
{
    private:
    int length;
    int breadth;

    public:
Rectangle(int l,int b)
{
   length=l;
   breadth=b;
}
int area() 
{
    return length *breadth;
}
};

int main() {
    int l, b;
    cout << "Enter the value of length and breadth: " << endl;
    cin >> l >> b;
    // Create a Rectangle object initialized to 0
    Rectangle r(l,b);
    int val = r.area();
    cout << "Area of length and breadth is " << val << endl;

    return 0;
}
