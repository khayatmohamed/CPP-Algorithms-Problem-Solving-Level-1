
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #31 to #35
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// ==================================================
// Read Non-Negative Number
// ==================================================

int ReadNonNegativeNumber(string message)
{
    int number;

    do
    {
        cout << message << " : ";
        cin >> number;

        if (number < 0)
        {
            cout << "Invalid input! Please enter a non-negative number."
                 << endl;
        }

    } while (number < 0);

    return number;
}


// ==================================================
// Problem #31 - Calculate Powers of 2, 3, and 4
// ==================================================

void PrintNumberPowersOf2_3_4(int number) {
    int power2, power3, power4;

    power2 = number * number;
    power3 = number * number * number;
    power4 = number * number * number * number;

    cout << "Number squared (Power 2): " << power2 << '\n';
    cout << "Number cubed (Power 3): " << power3 << '\n';
    cout << "Number to Power 4: " << power4 << '\n';
}


// ==================================================
// Problem #32 - Calculate Number Raised to a Power
// ==================================================

int CalculatePower(int base, int exponent) {
    int i = 1;
    int result = 1;

    if (exponent == 0) {
        return 1;
    }

    while (i <= exponent) {
        result = result * base;
        i++;
    }

    return result;
}


// ==================================================
// Problem #33 - Determine Grade Letter
// ==================================================

int ReadNumberInRange(int from, int to) {
    int number;

    do {
        cout << "Enter a grade between "
             << from << " and " << to << ": ";
        cin >> number;

        if (number < from || number > to) {
            cout << "Invalid grade! Please enter a grade between "
                 << from << " and " << to << "."
                 << endl;
        }

    } while (number < from || number > to);

    return number;
}

char GetGradeLetter(int grade) {
    if (grade >= 90 && grade <= 100) {
        return 'A';
    }
    else if (grade >= 80) {
        return 'B';
    }
    else if (grade >= 70) {
        return 'C';
    }
    else if (grade >= 60) {
        return 'D';
    }
    else if (grade >= 50) {
        return 'E';
    }
    else {
        return 'F';
    }
}


// ==================================================
// Problem #34 - Calculate Sales Commission
// ==================================================

float ReadTotalSales() {
    float totalSales;

    cout << "Enter the total sales amount: ";
    cin >> totalSales;

    return totalSales;
}

float GetCommissionPercentage(float totalSales) {
    if (totalSales > 1000000) {
        return 0.01;
    }
    else if (totalSales > 500000) {
        return 0.02;
    }
    else if (totalSales > 100000) {
        return 0.03;
    }
    else if (totalSales > 50000) {
        return 0.05;
    }
    else {
        return 0.00;
    }
}

float CalculateTotalCommission(float totalSales) {
    if (totalSales > 1000000) {
        return totalSales * GetCommissionPercentage(totalSales);
    }
    else if (totalSales > 500000) {
        return totalSales * GetCommissionPercentage(totalSales);
    }
    else if (totalSales > 100000) {
        return totalSales * GetCommissionPercentage(totalSales);
    }
    else if (totalSales > 50000) {
        return totalSales * GetCommissionPercentage(totalSales);
    }
    else {
        return totalSales * GetCommissionPercentage(totalSales);
    }
}


// ==================================================
// Problem #35 - Calculate Total Money in Piggy Bank
// ==================================================

struct stPiggyBank {
    int pennies, nickels, dimes, quarters, dollars;
};

stPiggyBank ReadPiggyBank()
{
    stPiggyBank piggyBank;

    cout << "Enter the number of pennies: ";
    cin >> piggyBank.pennies;

    cout << "Enter the number of nickels: ";
    cin >> piggyBank.nickels;

    cout << "Enter the number of dimes: ";
    cin >> piggyBank.dimes;

    cout << "Enter the number of quarters: ";
    cin >> piggyBank.quarters;

    cout << "Enter the number of dollar coins: ";
    cin >> piggyBank.dollars;

    return piggyBank;
}

int CalculateTotalPennies(stPiggyBank piggyBank)
{
    return piggyBank.pennies * 1 +
           piggyBank.nickels * 5 +
           piggyBank.dimes * 10 +
           piggyBank.quarters * 25 +
           piggyBank.dollars * 100;
}


// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    // Problem #31 - Calculate Powers of 2, 3, and 4

    /*
    PrintNumberPowersOf2_3_4(
        ReadNonNegativeNumber("Enter a non-negative number"));
    */


    // Problem #32 - Calculate Number Raised to a Power

    /*
    int base = ReadNonNegativeNumber("Enter the base number");
    int exponent = ReadNonNegativeNumber("Enter the exponent");

    cout << base << " raised to the power of "
         << exponent << " is: "
         << CalculatePower(base, exponent) << endl;
    */


    // Problem #33 - Determine Grade Letter

    /*
    cout << "Grade Letter: "
         << GetGradeLetter(ReadNumberInRange(1, 100))
         << endl;
    */


    // Problem #34 - Calculate Sales Commission

    /*
    float totalSales = ReadTotalSales();

    cout << "Commission Percentage: "
         << GetCommissionPercentage(totalSales) * 100
         << "%" << '\n';

    cout << "Total Commission Amount: "
         << CalculateTotalCommission(totalSales)
         << endl;
    */


    // Problem #35 - Calculate Total Money in Piggy Bank

    int totalPennies = CalculateTotalPennies(ReadPiggyBank());

    cout << "Total value in pennies: "
         << totalPennies << endl;

    cout << "Total value in dollars: $"
         << (double)totalPennies / 100 << endl;

    return 0;
}

