
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #26 to #30
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// ==================================================
// Read Positive Number
// ==================================================

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message << " : ";
        cin >> number;

        if (number <= 0)
        {
            cout << "Invalid input! Please enter a positive number."
                << endl;
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Problem #26 - Print Numbers From 1 to N
// ==================================================

void PrintNumbersFrom1ToN_UsingFor(int N) {

    for (int i = 1; i <= N; i++)
    {
        cout << i << '\n';
    }
}

void PrintNumbersFrom1ToN_UsingWhile(int N) {
    int i = 1;
    while (i <= N) {
        cout << i << '\n';
        i++;
    }
}

void PrintNumbersFrom1ToN_UsingDoWhile(int N) {
    int i = 1;
    do {
        cout << i << '\n';
        i++;
    } while (i <= N);
}


// ==================================================
// Problem #27 - Print Numbers From N to 1
// ==================================================

void PrintNumbersFromNTo1_UsingFor(int N) {
    for (int i = N; i >= 1; i--)
    {
        cout << i << "\n";
    }
}

void PrintNumbersFromNTo1_UsingWhile(int N) {
    int i = N;
    while (i >= 1) {
        cout << i << "\n";
        i--;
    }
}

void PrintNumbersFromNTo1_UsingDoWhile(int N) {
    int i = N;
    do {
        cout << i << '\n';
        i--;

    } while (i >= 1);
}


// ==================================================
// Problem #28 - Sum Odd Numbers From 1 to N
// ==================================================

enum enNumberType {
    Odd,
    Even
};

enNumberType CheckOddOrEven(int Number) {
    if (Number % 2 != 0)
        return Odd;

    else
        return Even;
}

int SumOddNumbersFrom1ToN_UsingFor(int N) {
    int sum = 0;
    cout << "Sum of odd numbers using for loop: ";
    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == Odd)
            sum += i;
    }
    return sum;
}

int SumOddNumbersFrom1ToN_UsingWhile(int N) {
    int sum = 0;
    int i = 1;
    cout << "Sum of odd numbers using while loop: ";
    while (i <= N) {
        if (CheckOddOrEven(i) == Odd) {
            sum += i;
        }
        i++;
    }
    return sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhile(int N) {
    int sum = 0;
    int i = 1;
    cout << "Sum of odd numbers using do-while loop: ";
    do {
        if (CheckOddOrEven(i) == Odd)
            sum += i;

        i++;
    } while (i <= N);
    return sum;
}


// ==================================================
// Problem #29 - Sum Even Numbers From 1 to N
// ==================================================

int SumEvenNumbersFrom1ToN_UsingFor(int N) {
    int sum = 0;
    cout << "Sum of even numbers using for loop: ";
    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == Even)
            sum += i;
    }
    return sum;
}

int SumEvenNumbersFrom1ToN_UsingWhile(int N) {
    int sum = 0;
    int i = 1;
    cout << "Sum of even numbers using while loop: ";
    while (i <= N) {
        if (CheckOddOrEven(i) == Even) {
            sum += i;
        }
        i++;
    }
    return sum;
}

int SumEvenNumbersFrom1ToN_UsingDoWhile(int N) {
    int sum = 0;
    int i = 1;
    cout << "Sum of even numbers using do-while loop: ";
    do {
        if (CheckOddOrEven(i) == Even)
            sum += i;

        i++;
    } while (i <= N);
    return sum;
}


// ==================================================
// Problem #30 - Calculate Factorial of N
// ==================================================

int CalculateFactorial(int N) {
    int factorial = 1;
    for (int i = N; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}


// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    // Problem #26 - Print Numbers From 1 to N

    /*
    int N = ReadPositiveNumber("Enter a positive number");
    PrintNumbersFrom1ToN_UsingFor(N);
    PrintNumbersFrom1ToN_UsingWhile(N);
    PrintNumbersFrom1ToN_UsingDoWhile(N);
    */


    // Problem #27 - Print Numbers From N to 1

    /*
    int N = ReadPositiveNumber("Enter a positive number");
    PrintNumbersFromNTo1_UsingFor(N);
    PrintNumbersFromNTo1_UsingWhile(N);
    PrintNumbersFromNTo1_UsingDoWhile(N);
    */


    // Problem #28 - Sum Odd Numbers From 1 to N

    /*
    int N = ReadPositiveNumber("Enter a positive number");
    cout << SumOddNumbersFrom1ToN_UsingFor(N) << '\n';
    cout << SumOddNumbersFrom1ToN_UsingWhile(N) << '\n';
    cout << SumOddNumbersFrom1ToN_UsingDoWhile(N);
    */


    // Problem #29 - Sum Even Numbers From 1 to N

    /*
    int N = ReadPositiveNumber("Enter a positive number");
    cout << SumEvenNumbersFrom1ToN_UsingFor(N) << '\n';
    cout << SumEvenNumbersFrom1ToN_UsingWhile(N) << '\n';
    cout << SumEvenNumbersFrom1ToN_UsingDoWhile(N);
    */


    // Problem #30 - Calculate Factorial of N

    int N = ReadPositiveNumber("Enter a positive number to calculate its factorial");
    cout << "Factorial of " << N << " is: " << CalculateFactorial(N);

    return 0;
}

