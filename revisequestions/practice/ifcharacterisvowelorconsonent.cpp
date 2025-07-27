#include <iostream>
using namespace std;

int main() {
  // a to z = 97 to 122
  // A to Z = 65 to 90
  char ch;
  cout << "Enter an alphabet: ";
  cin >> ch;

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // check for vowels upper case or lower case
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      cout << ch << " is a vowel" << endl;
    } else {
      cout << ch << " is a consonant" << endl;
    }
  } else {
    cout << "Invalid input, please enter an alphabet" << endl;
  }

  return 0;
}
