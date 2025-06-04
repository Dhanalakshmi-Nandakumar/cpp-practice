#include <iostream>
using namespace std;

void openDoll(int dollNumber) {
    if (dollNumber == 0) {
        cout << "Reached the smallest doll 🎯" << endl;
        return; // Base case
    }

    cout << "Opening doll #" << dollNumber << endl;
    openDoll(dollNumber - 1); // Recursive call
    cout << "Closing doll #" << dollNumber << endl;
}

int main() {
    openDoll(3);
    return 0;
}
