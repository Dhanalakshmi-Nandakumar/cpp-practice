#include <iostream>
using namespace std;

// Base exception class
class MyException {
public:
    virtual const char* what() const noexcept {
        return "MyException occurred";  // default message
    }

    virtual ~MyException() {}  // virtual destructor for safety
};

// Derived exception class
class DivisionByZero : public MyException {
public:
    const char* what() const noexcept override {
        return "Division by zero error!";
    }
};

int main() {
    try {
        throw DivisionByZero();  // throw derived exception
    }
    catch (const MyException& e) {  // catch by base class reference
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
