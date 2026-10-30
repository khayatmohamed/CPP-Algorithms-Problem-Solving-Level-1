
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #21 to #25
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;


// ==================================================
// Read Positive Number
// ==================================================

double ReadPositiveNumber(string message)
{
    double number;

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
// Problem #21 - Circle Area By Circumference
// ==================================================

double CalculateCircleAreaByCircumference(double circumference)
{
    return pow(circumference, 2) / (4 * PI);
}

void PrintCircleArea(double area)
{
    cout << "The area of the circle is: " << area << endl;
}


// ==================================================
// Problem #22 - Circle Area By Triangle Dimensions
// ==================================================

double CalculateCircleAreaByTriangle(double sideA, double sideB)
{
    return PI * (pow(sideB, 2) / 4) *
           ((2 * sideA) - sideB) /
           ((2 * sideA) + sideB);
}


// ==================================================
// Problem #23 - Circumcircle Area Of A Triangle
// ==================================================

double CalculateCircumcircleAreaByTriangle(
    double sideA, double sideB, double sideC)
{
    double semiPerimeter =
        (sideA + sideB + sideC) / 2;

    double triangleArea = sqrt(
        semiPerimeter *
        (semiPerimeter - sideA) *
        (semiPerimeter - sideB) *
        (semiPerimeter - sideC)
    );

    double circumradius =
        (sideA * sideB * sideC) / (4 * triangleArea);

    return PI * circumradius * circumradius;
}


// ==================================================
// Problem #24 - Validate Age In Range
// ==================================================

int ReadAge()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    return age;
}

bool IsNumberInRange(int number, int minimum, int maximum)
{
    return number >= minimum && number <= maximum;
}

void PrintAgeValidationResult(int age)
{
    if (IsNumberInRange(age, 18, 45))
    {
        cout << "Valid age! " << age
             << " is within the allowed range (18-45)."
             << endl;
    }
    else
    {
        cout << "Invalid age! " << age
             << " is outside the allowed range (18-45)."
             << endl;
    }
}


// ==================================================
// Problem #25 - Read Age Until Valid
// ==================================================

int ReadAgeUntilValid(int minimum, int maximum)
{
    int age;

    do
    {
        age = ReadAge();

        if (!IsNumberInRange(age, minimum, maximum))
        {
            cout << "Invalid age! Please enter an age between "
                 << minimum << " and " << maximum
                 << "." << endl;
        }

    } while (!IsNumberInRange(age, minimum, maximum));

    return age;
}


// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    // Problem #21 - Circle Area By Circumference

    /*
    double circumference = ReadPositiveNumber(
        "Enter the circumference of the circle");

    PrintCircleArea(
        CalculateCircleAreaByCircumference(circumference));
    */


    // Problem #22 - Circle Area By Triangle Dimensions

    /*
    double sideA = ReadPositiveNumber(
        "Enter side length A");

    double sideB = ReadPositiveNumber(
        "Enter side length B");

    PrintCircleArea(
        CalculateCircleAreaByTriangle(sideA, sideB));
    */


    // Problem #23 - Circumcircle Area Of A Triangle

    /*
    double sideA = ReadPositiveNumber(
        "Enter the first side of the triangle");

    double sideB = ReadPositiveNumber(
        "Enter the second side of the triangle");

    double sideC = ReadPositiveNumber(
        "Enter the third side of the triangle");

    PrintCircleArea(
        CalculateCircumcircleAreaByTriangle(
            sideA, sideB, sideC));
    */


    // Problem #24 - Validate Age In Range

    /*
    int age = ReadAge();

    PrintAgeValidationResult(age);
    */


    // Problem #25 - Read Age Until Valid

    int age = ReadAgeUntilValid(18, 45);

    PrintAgeValidationResult(age);

    return 0;
}

