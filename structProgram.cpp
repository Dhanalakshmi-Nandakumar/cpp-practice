#include <bits/stdc++.h>
using namespace std;

// Structure definition
struct Rectangle 
{
    
    int length;
    int breadth;

    
void initialize(int l,int b)
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
   
    // Create a Rectangle object initialized to 0
    Rectangle r={0,0};
     int l, b;
    cout << "Enter the value of length and breadth: " << endl;
    cin >> l >> b;
    r.initialize(l,b);
    int val = r.area();
    cout << "Area of length and breadth is " << val << endl;

    return 0;
}
