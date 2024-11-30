#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        // Print `^` symbols for each row
        for (int j = 1; j <= rows; j++) {
            cout << "^ ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}