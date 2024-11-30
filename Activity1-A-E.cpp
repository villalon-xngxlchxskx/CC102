#include <iostream>
#include <vector>

using namespace std;

// Function to print a pattern based on its type
void printPattern(int type, int size) {
    if (type == 1) { // Pattern (a)
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if ((i + j) % 2 == 0) {
                    cout << "#";
                } else {
                    cout << "*";
                }
            }
            cout << endl;
        }
    } else if (type == 2) { // Pattern (b)
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j <= i; ++j) {
                cout << "#";
            }
            cout << endl;
        }
    } else if (type == 3) { // Pattern (c)
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size - i; ++j) {
                cout << "#";
            }
            cout << endl;
        }
    } else if (type == 4) { // Pattern (d) - Pascal's Triangle variation
        vector<vector<int>> triangle(size);
        for (int i = 0; i < size; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            for (int j = 0; j <= i; ++j) {
                cout << triangle[i][j] << (j == i ? "" : " ");
            }
            cout << endl;

        }
    } else if (type == 5) { // Pattern (e) - Number Triangle
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << j << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid pattern type." << endl;
    }
}


int main() {
    int size = 8; // You can change the size of the patterns here

    cout << "Pattern (a):" << endl;
    printPattern(1, size);
    cout << endl;

    cout << "Pattern (b):" << endl;
    printPattern(2, size);
    cout << endl;

    cout << "Pattern (c):" << endl;
    printPattern(3, size);
    cout << endl;

    cout << "Pattern (d):" << endl;
    printPattern(4, size);
    cout << endl;

    cout << "Pattern (e):" << endl;
    printPattern(5, size);
    cout << endl;

    return 0;
}
