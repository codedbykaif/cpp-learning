#include <iostream>
using namespace std;

// Function definition should be outside main()
void startriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    startriangle(3);
    startriangle(4);
    startriangle(5);
    startriangle(6);
    startriangle(7);
    startriangle(8);
    startriangle(9);
    startriangle(10);
    startriangle(11);
    startriangle(12);
    startriangle(13);
    startriangle(14);
    startriangle(15);
    startriangle(16);
    startriangle(17);
    
    return 0;
  }
