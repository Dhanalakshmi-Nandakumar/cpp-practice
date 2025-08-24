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
    str.insert(6, "s");
    string str1="1234567890";
    str1.insert(3,"8");
    cout << "After insert: " << str1 << endl;
     cout << "After insert: " << str << endl;
    //erase number  element
    cout << "before erase: " << str1 << endl;
    cout<<str1.erase(2,2)<<endl;
    cout << "After erase: " << str1 << endl;
     //cout << "Erase: from 2nd index to 4th index" << str.erase(2,4) << endl;
      //cout << "Erase: from 2nd index to last index" << str.erase(2) << endl;
      //cout << "After erasing all element " << str.erase() << endl;
      cout<<"trying to print the str"<<str<<endl;

      //Replace element
     // str1.replace(2,8," dhanalakshmi love c program");
       str1.replace(2,4," dhanalakshmi love c program");
      cout<<str1;
cout<<str.replace(3,str.size()-1,"learn,code,practice")<<endl;

//substr
cout<<str.substr(2,15)<<endl;
//find-->give first p index
cout<<str<<endl;
cout<<str.find("p")<<endl;
//rfind-->give last o index
cout<<str<<endl;
cout<<str.rfind("o")<<endl;
//compare
string str2="apple",str3="apple";

//cout<<"comparing two string"<<str3.compare(str2);
cout<<"comparing two string "<<str3.compare(str2)<<endl;

//clear --note clear() does not return anything since it datatype is void
cout<<"before using clear() "<<str2<<endl<<str3<<endl;
str2.clear();
str3.clear();

 cout<<"after using clear() value becomes empty "<<str2<<endl<<str3;  

    return 0;
}
