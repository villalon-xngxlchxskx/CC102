#include <iostream>

using namespace std;

int main ()
 {
     int n = 5; 
     cout << "         *" << endl;
     for (int i = 1; i <= n; ++i) {
           cout << "         ";
           for (int k = 0; k < i; ++k) {
                 cout << "^";
           }
           cout << "*" << endl;
     }
     int m = 2; 
     for (int i = 0; i < m; ++i) {
           cout << "##########";
           for (int j = 0; j < n; ++j) {
                 cout << "^";
     }
     cout << "*" << endl;
 
     }
     for (int i = n; i > 0; --i) {
           cout << "         ";
           for (int k = 0; k < i; ++k) {
                 cout << "^";
           }
           cout << "* " << endl;
     }
      cout << "         *" << endl;

      return 0;
}