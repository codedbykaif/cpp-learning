#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    int ascii = (int)ch;

    // Check if lowercase
    if (ascii >= 97 && ascii <= 122) {
        cout << "The character is a lowercase alphabet.";
    }
    // Check if uppercase
    else if (ascii >= 65 && ascii <= 90) {
        cout << "The character is an uppercase alphabet.";
    }
    // Else case for non-alphabet characters
    else {
        cout << "The character is not an alphabet.";
    }

    return 0;
}