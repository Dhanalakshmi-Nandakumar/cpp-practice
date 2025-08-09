#include <iostream>
#include <string>  // Required for std::string
using namespace std;

int main() {
    // char example
    char letter = 'A';   // single character
    cout << "Char: " << letter << endl;

    // string example
    string name = "Lakshmi";  // multiple characters
    cout << "String: " << name << endl;

    // string operations
    cout << "Length: " << name.length() << endl;
    cout << "First char: " << name[0] << endl;
    cout << "Last char: " << name[name.length()-2] << endl;

    return 0;
}
