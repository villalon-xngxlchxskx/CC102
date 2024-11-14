#include <iostream>
#include <string>
using namespace std;

int main() {
    string accountType, accountLevel;
    double balance, interestRate = 0.0;

    // User input
    cout << "Enter your account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter your account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;
    cout << "Enter your account balance: $";
    cin >> balance;

    // Determine the interest rate based on account type and level
    if (accountType == "Personal" || accountType == "personal") {
        if (accountLevel == "Standard" || accountLevel == "standard") {
            interestRate = 1.2;
        } else if (accountLevel == "Gold" || accountLevel == "gold") {
            if (balance >= 5000) {
                interestRate = 2.3;
            } else if (balance >= 1000) {
                interestRate = 1.9;
            } else {
                interestRate = 0.0; // No interest for insufficient balance
            }
        }
    } else if (accountType == "Business" || accountType == "business") {
        if (accountLevel == "Standard" || accountLevel == "standard") {
            if (balance >= 1500) {
                interestRate = 1.7;
            } else {
                interestRate = 0.0; // No interest for insufficient balance
            }
        } else if (accountLevel == "Platinum" || accountLevel == "platinum") {
            if (balance >= 10000) {
                interestRate = 2.5;
            } else {
                interestRate = 0.0; // No interest for insufficient balance
            }
        }
    }

    // Output the interest rate
    if (interestRate > 0) {
        cout << "You are eligible for an interest rate of " << interestRate << "%." << endl;
    } else {
        cout << "You are not eligible for any interest rate based on your current balance and account details." << endl;
    }

    return 0;
}