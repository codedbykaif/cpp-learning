#include <iostream>
using namespace std;

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    
    cout << "Enter the marks of sub1: ";
    cin >> sub1;
    cout << "Enter the marks of sub2: ";
    cin >> sub2;
    cout << "Enter the marks of sub3: ";
    cin >> sub3;
    cout << "Enter the marks of sub4: ";
    cin >> sub4;
    cout << "Enter the marks of sub5: ";
    cin >> sub5;

    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = sum / 5.0;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid input of marks" << endl;
    }
    else if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
