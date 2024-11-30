#include <iostream>
using namespace std;

int main() {
    int rows = 11; // Total number of rows

    for (int i = 1; i <= rows; i++) {
        // Print '#' symbols
        for (int j = 1; j < i; j++) {
            cout << "#";
        }
        // Print '^' at the end
        cout << "^" << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        // Print '#' symbols
        for (int j = 1; j < i; j++) {
            cout << "#";
        }
        // Print '^' at the end
        cout << "^" << endl;
    }

    return 0;
}