#include <iostream>

using namespace std;

int main() {
     int rows = 5; 
     int cols = 10; 

     for (int i = 0; i < rows; ++i) {
           for (int j = 0; j < cols; ++j) {
                cout << ((i % 2 == 0) ? "^  " : "  ^");
           }
          cout << endl;
     }
     
     return 0;
}