#include <iostream>
#include <cctype>  // for character classification
using namespace std;

int main() {
    char text[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    int alpha = 0, digit = 0, alnum = 0, space = 0, upper = 0, lower = 0, punct = 0, xdigit = 0;

   

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        if (isalpha(ch)) alpha++;  
        if (isdigit(ch)) digit++;
        if (isalnum(ch)) alnum++;
        if (isspace(ch)) space++;
        if (isupper(ch)) upper++;
        if (islower(ch)) lower++;
        if (ispunct(ch)) punct++;
        if (isxdigit(ch)) xdigit++;
    }

    cout << " Summary"<<endl;
    cout << "Alphabets      : " << alpha << endl;
    cout << "Digits         : " << digit << endl;
    cout << "Alphanumeric   : " << alnum << endl;
    cout << "Spaces         : " << space << endl;
    cout << "Uppercase      : " << upper << endl;
    cout << "Lowercase      : " << lower << endl;
    cout << "Punctuation    : " << punct << endl;
    cout << "Hexa Digits     : " << xdigit << endl;
    char letter='d'; 
    //note 
    //true-return positive number
    //false - return zero 
    if(islower(letter))
        cout<<"Given char is lowercase";
    else
        cout<<"it is not lowercase";
    cout<<endl;
    cout<<isdigit('9')?1:0;

    return 0;
}
