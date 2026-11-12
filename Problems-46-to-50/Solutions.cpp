/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #46 to #50
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;


// ====================================================
// Problem #46 - Print Letters From A to Z
// ====================================================

void printLettersFromAToZ() {
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        cout << letter << '\n';
    }
}


// ====================================================
// Problem #47 - Calculate Loan Repayment Months
// ====================================================

float readPositiveNumber(string message) {
    float number;

    do {
        cout << message << " : ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid Input! Please enter a positive number.\n";
        }

    } while (number <= 0);

    return number;
}

float calculateTotalMonths(float loanAmount, float monthlyInstallment) {
    return ceil(loanAmount / monthlyInstallment);
}


// ====================================================
// Problem #48 - Calculate Monthly Installment
// ====================================================

float calculateMonthlyInstallment(float loanAmount, float numberOfMonths) {
    return loanAmount / numberOfMonths;
}


// ====================================================
// Problem #49 - Login With Unlimited Attempts
// ====================================================

string readPinCode() {
    string pinCode;

    cout << "Please enter your PIN code: ";
    cin >> pinCode;

    return pinCode;
}

bool loginWithoutAttemptLimit() {
    string pinCode;

    do {
        pinCode = readPinCode();

        if (pinCode == "1234") {
            return true;
        }
        else {
            cout << "\nWrong PIN! Please try again.\n";
            system("color 4F"); // Change screen color to red
        }

    } while (pinCode != "1234");

    return false;
}


// ====================================================
// Problem #50 - Login With Three Attempts
// ====================================================

bool loginWithThreeAttempts() {
    string pinCode;
    int attemptsRemaining = 3;

  do{

        pinCode = readPinCode();

        if (pinCode == "1234") {
            return true;
        }

        attemptsRemaining--;

        if (attemptsRemaining > 0) {
            cout << "\nWrong PIN! You have "
                << attemptsRemaining
                << " attempt(s) remaining.\n";
        }
        else {
            cout << "\nWrong PIN! No attempts remaining.\n";
        }

        system("color 4F"); // Change screen color to red

  } while (pinCode != "1234" && attemptsRemaining > 0);

    return false;
}


// ====================================================
// Main Function - Select a Problem
// ====================================================

int main()
{
    // Problem #46

    /*printLettersFromAToZ();*/


    // Problem #47

    /*
    float loanAmount = readPositiveNumber("Please enter the loan amount");

    float monthlyInstallment = readPositiveNumber("Please enter the monthly installment");

    cout << "\nTotal number of months required to repay the loan: "
         << calculateTotalMonths(loanAmount, monthlyInstallment)
         << " months" << '\n';
    */


    // Problem #48

    /*
    float loanAmount = readPositiveNumber("Please enter the loan amount");

    float numberOfMonths = readPositiveNumber("Please enter the number of months");

    cout << "Monthly installment amount: "
         << calculateMonthlyInstallment(loanAmount, numberOfMonths)
         << '\n';
    */


    // Problem #49

    /*
    if (loginWithoutAttemptLimit()) {
        system("color 2F");
        cout << "Your account balance is: " << 7500 << '\n';
    }
    */


    // Problem #50

    if (loginWithThreeAttempts()) {
        system("color 2F");
        cout << "Your account balance is: " << 7500 << '\n';
    }
    else {
        cout << "Your card has been blocked. Please contact your bank for assistance.\n";
    }

    return 0;
}
