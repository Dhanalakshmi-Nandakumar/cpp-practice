#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Im learing c   and c++ programming language";
    cout << str << endl;

    // length() / size()
    cout << "Length: " << str.length() << ", Size: " << str.size() << endl;

    // empty()
    cout << "Is empty? " << (str.empty()?" yes string is empty":"no")<<endl;

    // Accessing characters
    cout << "Character at index 1 (using at()): " << str.at(1) << endl;
    cout << "Character at index 2 (using []): " << str[2] << endl;

    // front() and back()
    //it prints only character
    cout << "First char (front): " << str.front() << endl;
    cout << "Last char (back): " << str.back() << endl;

    // append() and push_back()
    str.append(" World");
    cout << "After append: " << str;
    cout<<str.append("and i'm happy to learn");
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // pop_back()
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // insert()
    str.insert(5, "):");
    cout << "After insert: " << str << endl;

    return 0;
}
