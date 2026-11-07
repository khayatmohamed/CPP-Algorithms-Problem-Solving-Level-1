
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #36 to #40
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// ==================================================
// Problem #36 - Calculator: Basic Arithmetic Operations
// ==================================================

enum enOperationType {
    Addition = '+',
    Subtraction = '-',
    Division = '/',
    Multiplication = '*'
};


float ReadNumber(string message) {
    float number;

    cout << message;
    cin >> number;

    return number;
}


enOperationType ReadOperationType() {
    char operation;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    return (enOperationType)operation;
}


float Calculate(float firstNumber, float secondNumber,
    enOperationType operationType) {

    switch (operationType) {

    case Addition:
        return firstNumber + secondNumber;

    case Subtraction:
        return firstNumber - secondNumber;

    case Multiplication:
        return firstNumber * secondNumber;

    case Division:
        if (secondNumber == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else {
            return firstNumber / secondNumber;
        }
        break;

    default:
        cout << "Error: Invalid operation." << endl;
        break;
    }

    return 0;
}


// ==================================================
// Problem #37 - Sum Numbers Until -99 Is Entered
// ==================================================

int SumNumbersUntilMinus99() {

    int inputNumber;
    int totalSum = 0;
    int numberCount = 1;

    do {

        inputNumber = ReadNumber(
            "Please enter number " + to_string(numberCount) + ": "
        );

        if (inputNumber == -99) {
            break;
        }

        totalSum += inputNumber;
        numberCount++;

    } while (inputNumber != -99);

    return totalSum;
}


// ==================================================
// Problem #38 - Check Whether a Number Is Prime
// ==================================================

enum enPrimeStatus {
    Prime,
    NotPrime
};


int ReadPositiveNumber(string message) {
    int number;

    do {
        cout << message;
        cin >> number;

        if (number <= 0) {
            cout << "\nInvalid number! Please try again." << endl;
        }

    } while (number <= 0);

    return number;
}


enPrimeStatus CheckPrimeNumber(int number) {

    if (number == 1) {
        return NotPrime;
    }

    for (int i = 2; i <= sqrt(number); i++) {

        if (number % i == 0) {
            return NotPrime;
        }
    }

    return Prime;
}


void PrintPrimeStatus(int number) {

    if (CheckPrimeNumber(number) == Prime) {
        cout << number << " is a Prime Number." << endl;
    }
    else {
        cout << number << " is Not a Prime Number." << endl;
    }
}


// ==================================================
// Problem #39 - Calculate Change After Payment
// ==================================================

float CalculateChange(float totalBill, float totalCashPaid) {
    return totalCashPaid - totalBill;
}


// ==================================================
// Problem #40 - Calculate Total Bill After Service
// Charge and Sales Tax
// ==================================================

float CalculateTotalBillAfterServiceAndTax(float totalBill) {

    totalBill = totalBill * 1.1;
    totalBill = totalBill * 1.16;

    return totalBill;
}


// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    // Problem #36 - Calculator: Basic Arithmetic Operations

    /*
    float firstNumber = ReadNumber("Enter the first number: ");
    float secondNumber = ReadNumber("Enter the second number: ");

    enOperationType operationType = ReadOperationType();

    cout << "Calculation result: "
         << Calculate(firstNumber, secondNumber, operationType)
         << endl;
    */


    // Problem #37 - Sum Numbers Until -99 Is Entered

    /*
    cout << "Total sum: "
         << SumNumbersUntilMinus99()
         << endl;
    */


    // Problem #38 - Check Whether a Number Is Prime

    /*
    PrintPrimeStatus(
        ReadPositiveNumber("Please enter a positive number: ")
    );
    */


    // Problem #39 - Calculate Change After Payment

    /*
    float totalBill = ReadNumber("Enter the total bill amount: ");
    float totalCashPaid = ReadNumber("Enter the cash paid: ");

    cout << "Total bill: " << totalBill << endl;
    cout << "Total cash paid: " << totalCashPaid << endl;
    cout << "---------------------------------------------\n";

    cout << "Change: "
         << CalculateChange(totalBill, totalCashPaid);
    */


    // Problem #40 - Calculate Total Bill After Service
    // Charge and Sales Tax

    float totalBill = ReadNumber("Enter the total bill amount: ");

    cout << "Original bill: " << totalBill << endl;

    cout << "Total bill after service charge and sales tax: "
        << CalculateTotalBillAfterServiceAndTax(totalBill)
        << endl;

    return 0;
}

