#include <iostream>
using namespace std;

int add(int a, int b, int c =9) {  //  right hand side allowed
    return a + b + c;
}

// Wrong: default in middle
// int addWrong(int a = 5, int b, int c = 10);

int main() {
    cout << add(2,7) << endl;         // 2 + 5 + 10 = 17
    cout << add(2, 3) << endl;      // 2 + 3 + 10 = 15
    cout << add(2, 3, 4) << endl;   // 2 + 3 + 4  = 9
}
