#include <iostream>
using namespace std;
struct student
{
    int rollno;
    string name; 
}*s;
//size of pointer does not depend on Data type
int main() {
    int* p1;       // pointer to int
    char* p2;      // pointer to char
    double* p3;    // pointer to double
    float* p4;     // pointer to float
    cout << "Size of int pointer:    " << sizeof(p1) << " bytes" << endl;
    cout << "Size of char pointer:   " << sizeof(p2) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(p3) << " bytes" << endl;
    cout << "Size of float pointer:  " << sizeof(p4) << " bytes" << endl;
    cout << "Size of struct pointer:  " << sizeof(*s) << " bytes" << endl;


    return 0;
}
