#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if ((num % 3 == 0 || num % 5 == 0) && (num % 15 != 0)) {
        cout << "The number satisfies the given condition";
    } else {
        cout << "The number does not satisfy the condition";
    }

    return 0;
}