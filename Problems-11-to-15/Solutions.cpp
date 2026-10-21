
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #11 to #15
    Language: C++
====================================================
*/

#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Problem #11 - Average of Three Marks (Pass / Fail)
// ==================================================

enum enPassFail
{
    Pass,
    Fail
};

void ReadThreeMarks(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter the first mark: ";
    cin >> mark1;

    cout << "Enter the second mark: ";
    cin >> mark2;

    cout << "Enter the third mark: ";
    cin >> mark3;
}

int SumThreeMarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return SumThreeMarks(mark1, mark2, mark3) / 3.0f;
}

enPassFail CheckAveragePassFail(float average)
{
    if (average >= 50)
        return Pass;
    else
        return Fail;
}

void PrintAverageResult(float average)
{
    cout << "\nThe average is: " << average << endl;

    if (CheckAveragePassFail(average) == Pass)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;
}

// ==================================================
// Problem #12 - Maximum of Two Numbers
// ==================================================

void ReadTwoNumbers(int& number1, int& number2)
{
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;
}

int MaxOfTwoNumbers(int number1, int number2)
{
    if (number2 > number1)
        return number2;
    else
        return number1;
}

void PrintMaximum(int maximum)
{
    cout << "\nThe maximum number is: " << maximum << endl;
}

// ==================================================
// Problem #13 - Maximum of Three Numbers
// ==================================================

void ReadThreeNumbers(int& number1, int& number2, int& number3)
{
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter the third number: ";
    cin >> number3;
}

int MaxOfThreeNumbers(int number1, int number2, int number3)
{
    int maximum = number1;

    if (number2 > maximum)
        maximum = number2;

    if (number3 > maximum)
        maximum = number3;

    return maximum;
}

// ==================================================
// Problem #14 - Swap Two Numbers
// ==================================================

void SwapNumbers(int& number1, int& number2)
{
    int temporary = number1;

    number1 = number2;
    number2 = temporary;
}

void PrintTwoNumbers(int number1, int number2)
{
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
}

// ==================================================
// Problem #15 - Rectangle Area
// ==================================================

double ReadPositiveNumber(string message)
{
    double number;

    do
    {
        cout << message;
        cin >> number;

        if (!cin)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            number = -1;
        }

        if (number <= 0)
            cout << "Please enter a valid positive number.\n";

    } while (number <= 0);

    return number;
}

double CalculateRectangleArea(double length, double width)
{
    return length * width;
}

void PrintRectangleArea(double area)
{
    cout << "\nThe area of the rectangle is: "
         << area << endl;
}

// ==================================================
// Main Function - Select a Problem
// ==================================================


int main()
{
    // ==========================================
    // Problem #11 - Average of Three Marks
    // ==========================================

    /*
    int mark1, mark2, mark3;

    ReadThreeMarks(mark1, mark2, mark3);

    PrintAverageResult(
        CalculateAverage(mark1, mark2, mark3)
    );
    */


    // ==========================================
    // Problem #12 - Maximum of Two Numbers
    // ==========================================

    /*
    int number1, number2;

    ReadTwoNumbers(number1, number2);

    PrintMaximum(
        MaxOfTwoNumbers(number1, number2)
    );
    */


    // ==========================================
    // Problem #13 - Maximum of Three Numbers
    // ==========================================

    /*
    int number1, number2, number3;

    ReadThreeNumbers(number1, number2, number3);

    PrintMaximum(
        MaxOfThreeNumbers(number1, number2, number3)
    );
    */


    // ==========================================
    // Problem #14 - Swap Two Numbers
    // ==========================================

    /*
    int number1, number2;

    ReadTwoNumbers(number1, number2);

    cout << "\nBefore swapping:\n";
    PrintTwoNumbers(number1, number2);

    SwapNumbers(number1, number2);

    cout << "\nAfter swapping:\n";
    PrintTwoNumbers(number1, number2);
    */


    // ==========================================
    // Problem #15 - Rectangle Area
    // ==========================================

    double length = ReadPositiveNumber(
        "Enter the rectangle length: "
    );

    double width = ReadPositiveNumber(
        "Enter the rectangle width: "
    );

    PrintRectangleArea(
        CalculateRectangleArea(length, width)
    );

    return 0;
}
