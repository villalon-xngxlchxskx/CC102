#include <iostream>
using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    string toPrintShow, toPrintMoney;

    cout << "Enter age: ";
    cin >> age;    
    toPrintShow = (age < 13) ? // Determine the movie show based on age and parental guidance
                  (cout << "With Parent? ", cin >> parent, parent ? "PG & G show." : "G show.") :
                  (age < 16) ? 
                  (cout << "With Parent? ", cin >> parent, parent ? "R, PG & G show." : "PG & G show.") :
                  "R, PG & G show.";
    cout << "Enter money: ";  // Determine the type of show based on money input
    cin >> money;
    toPrintMoney = (money < 7.5) ? "Not enough money." :
                   (money < 10.5) ? "Can go to matinee show." :
                   "Can go to evening & matinee show.";
    cout << toPrintShow << endl;   // Output the results
    cout << toPrintMoney << endl;

    return 0;
}