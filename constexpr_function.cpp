#include <iostream>
using namespace std;
constexpr auto PI = 3.14159;   // deduced as double
// constexpr function with auto return type
constexpr auto areaOfCircle(auto r) {
    return PI * r * r;   // return type deduced as double
}



int main() {
    // Compile-time constant evaluation
    constexpr auto smallCircle = areaOfCircle(5.0);  
    cout << "Area of circle with radius 5: " << smallCircle << endl;
    cout<<"\n";
    constexpr auto smallCircle1 = areaOfCircle(25);  
    cout << "Area of circle with radius 25: " << smallCircle1 << endl;
}
