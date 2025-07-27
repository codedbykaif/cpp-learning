#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter the character: ";
    cin >> input;

    if (input >= 'A' && input <= 'Z') {
        cout << "The input value is an uppercase alphabet";
    } 
    else if (input >= 'a' && input <= 'z') {
        cout << "The input value is a lowercase alphabet";
    } 
    else {
        cout << "The input value is not an alphabet";
    }

    return 0;
}
