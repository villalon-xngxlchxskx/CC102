#include <iostream>
using namespace std;

int main() {
    int age;
    char withParent;
    double money;
    string movieType;

    // Get user input
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with a parent? (y/n): ";
    cin >> withParent;
    cout << "Enter the amount of money you have: $";
    cin >> money;

    // Determine movie type based on age and whether the user is with a parent
    if (age < 13) {
        if (withParent == 'y' || withParent == 'Y') {
            movieType = "G, PG";
        } else {
            movieType = "G";
        }
    } else if (age >= 13 && age < 16) {
        if (withParent == 'y' || withParent == 'Y') {
            movieType = "G, PG, R";
        } else {
            movieType = "G, PG";
        }
    } else { // age 16 and over
        movieType = "G, PG, R";
    }

    // Determine if the user can afford the movie based on the time of showing
    if (money >= 10.50) {
        cout << "You can watch an evening movie. Available ratings: " << movieType << endl;
    } else if (money >= 7.50) {
        cout << "You can watch a matinee movie. Available ratings: " << movieType << endl;
    } else {
        cout << "You do not have enough money for a movie ticket." << endl;
    }

    return 0;
}