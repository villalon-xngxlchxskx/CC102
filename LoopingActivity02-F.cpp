#include <iostream>

using namespace std;

int main () 
{
     int n = 10; 
     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
              cout << "#" ;
        }
        cout << "  ";
        for (int k = i; k < n - 1; ++k) {
              cout << "#" ;
        }
        cout << endl;
     }
     return 0;
}
