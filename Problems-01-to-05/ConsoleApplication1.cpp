
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #01 to #05
    Language: C++
====================================================
*/

#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Problem #01 - Print a Name
// ==================================================

void PrintName(string Name)
{
    cout << "\nYour name is: " << Name << endl;
}

// ==================================================
// Problem #02 - Read and Print a Name
// ==================================================

string ReadName()
{
    string Name;

    cout << "Enter Name: ";
    cin >> Name;

    return Name;
}

// ==================================================
// Problem #03 - Read and Print Full Name
// ==================================================

string ReadFullName()
{
    string FullName;

    cout << "Enter Full Name: ";
    getline(cin >> ws, FullName);

    return FullName;
}

// ==================================================
// Problem #04 - Check Even or Odd Number
// ==================================================

enum enTypeNumber { Even, Odd };

int ReadNumber()
{
    int Number;

    cout << "Enter the number: ";
    cin >> Number;

    return Number;
}

enTypeNumber CheckNumberType(int Number)
{
    if (Number % 2 == 0)
        return Even;
    else
        return Odd;
}

void PrintNumberType(enTypeNumber NumberType)
{
    if (NumberType == Even)
        cout << "\nThe Number is Even\n";
    else
        cout << "\nThe Number is Odd\n";
}

// ==================================================
// Problem #05 - Hiring Eligibility
// ==================================================

struct stInfo
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;
    string AnswerLicense;
    string AnswerRecommendation;

    cout << "Enter Your Age: ";
    cin >> Info.Age;

    cout << "Do you have a Driver License? (Yes/No): ";
    cin >> AnswerLicense;

    Info.HasDriverLicense =
        (AnswerLicense == "Yes" || AnswerLicense == "yes");

    cout << "Do you have a Recommendation? (Yes/No): ";
    cin >> AnswerRecommendation;

    Info.HasRecommendation =
        (AnswerRecommendation == "Yes" ||
         AnswerRecommendation == "yes");

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return Info.HasRecommendation ||
           (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\nHired\n";
    else
        cout << "\nRejected\n";
}

// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    int Choice;

    cout << "=====================================\n";
    cout << " Algorithms & Problem Solving - L1\n";
    cout << " Problems #01 to #05\n";
    cout << "=====================================\n";

    cout << "\n1. Print Name";
    cout << "\n2. Read and Print Name";
    cout << "\n3. Read Full Name";
    cout << "\n4. Check Even or Odd";
    cout << "\n5. Hiring Eligibility";

    cout << "\n\nChoose a Problem (1-5): ";
    cin >> Choice;

    cout << "\n";

    switch (Choice)
    {
    case 1:
        PrintName("Mohamed");
        break;

    case 2:
        PrintName(ReadName());
        break;

    case 3:
        PrintName(ReadFullName());
        break;

    case 4:
        PrintNumberType(CheckNumberType(ReadNumber()));
        break;

    case 5:
        PrintResult(ReadInfo());
        break;

    default:
        cout << "Invalid Problem Number!\n";
    }

    return 0;
}
