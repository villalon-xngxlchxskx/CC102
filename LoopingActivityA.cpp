#include <iostream>

using namespace std;

int main ()
{
     int n = 8;
     for (int i = 0; i < n; ++i) {
         if (i % 2 == 0) {
            cout << "  ";
         }
      
      for (int j = 0; j < n; ++j) {
          cout << (j % 2 == 0 ? "  #" : "  *");
      
         }
         cout << endl;
     }
    
     return 0;
}