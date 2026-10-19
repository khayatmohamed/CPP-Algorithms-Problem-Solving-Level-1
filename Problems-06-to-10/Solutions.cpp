
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #06 to #10
    Language: C++
====================================================
*/

#include <iostream>
#include <string>

using namespace std;


// ==================================================
// Problem #06 - Read and Print Full Name
// ==================================================

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadFullName()
{
    stInfo Info;

    cout << "Enter Your First Name: ";
    cin >> Info.FirstName;

    cout << "Enter Your Last Name: ";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName;

    if (Reversed)
    {
        FullName = Info.LastName + " " + Info.FirstName;
    }
    else
    {
        FullName = Info.FirstName + " " + Info.LastName;
    }

    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\nYour Full Name is: " << FullName << endl;
}


// ==================================================
// Problem #07 - Calculate Half of a Number
// ==================================================

float ReadNumber()
{
    float Number;

    cout << "Enter a Number: ";
    cin >> Number;

    return Number;
}

float CalculateHalfNumber(float Number)
{
    return Number / 2.0f;
}

void PrintHalfNumber(float Number)
{
    cout << "\nHalf of " << Number
         << " is: " << CalculateHalfNumber(Number)
         << endl;
}


// ==================================================
// Problem #08 - Check Pass or Fail
// ==================================================

enum enPassFail
{
    Pass,
    Fail
};

int ReadMark()
{
    int Mark;

    cout << "Enter Your Mark: ";
    cin >> Mark;

    return Mark;
}

enPassFail CheckPassOrFail(int Mark)
{
    if (Mark >= 50)
    {
        return Pass;
    }
    else
    {
        return Fail;
    }
}

void PrintPassFailResult(int Mark)
{
    cout << "\nYour Mark is: " << Mark << endl;

    if (CheckPassOrFail(Mark) == Pass)
    {
        cout << "Result: Pass" << endl;
    }
    else
    {
        cout << "Result: Fail" << endl;
    }
}


// ==================================================
// Problem #09 - Sum Three Numbers
// ==================================================

void ReadThreeNumbers(int& Number1, int& Number2, int& Number3)
{
    cout << "Enter the First Number: ";
    cin >> Number1;

    cout << "Enter the Second Number: ";
    cin >> Number2;

    cout << "Enter the Third Number: ";
    cin >> Number3;
}

int SumThreeNumbers(int Number1, int Number2, int Number3)
{
    return Number1 + Number2 + Number3;
}

void PrintSumResult(int Total)
{
    cout << "\nThe Sum of the Three Numbers is: "
         << Total << endl;
}


// ==================================================
// Problem #10 - Calculate Average of Three Numbers
// ==================================================

float CalculateAverage(int Number1, int Number2, int Number3)
{
    return SumThreeNumbers(Number1, Number2, Number3) / 3.0f;
}

void PrintAverage(int Number1, int Number2, int Number3)
{
    cout << "The Average of the Three Numbers is: "
         << CalculateAverage(Number1, Number2, Number3)
         << endl;
}


// ==================================================
// Main Function
// Uncomment ONLY the problem you want to run.
// ==================================================

int main()
{
    cout << "========================================\n";
    cout << " Algorithms & Problem Solving - Level 1\n";
    cout << " Problems #06 to #10\n";
    cout << "========================================\n\n";

    // Problem #06 - Full Name
    // PrintFullName(GetFullName(ReadFullName(), false));

    // Problem #07 - Half of a Number
    // PrintHalfNumber(ReadNumber());

    // Problem #08 - Pass or Fail
    // PrintPassFailResult(ReadMark());

    // Problem #09 - Sum Three Numbers
    // int Number1, Number2, Number3;
    // ReadThreeNumbers(Number1, Number2, Number3);
    // PrintSumResult(SumThreeNumbers(Number1, Number2, Number3));

    // Problem #10 - Average of Three Numbers
    int Number1, Number2, Number3;
    ReadThreeNumbers(Number1, Number2, Number3);
    PrintAverage(Number1, Number2, Number3);

    return 0;
}

