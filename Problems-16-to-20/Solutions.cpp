
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #16 to #20
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

double ReadPositiveNumber(string message) {
    double number;

    do {
        cout << message << " : ";
        cin >> number;

        if (number <= 0) {
            cout << "Please Enter a Positive Number!" << endl;
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Problem #16 - Rectangle Area By Side And Diagonal
// ==================================================

double CalculateRectangleAreaBySideAndDiagonal(
    double side, double diagonal) {

    return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

void PrintRectangleArea(double area) {
    cout << "The area of the rectangle is : " << area << endl;
}


// ==================================================
// Problem #17 - Triangle Area
// ==================================================

double CalculateTriangleArea(double base, double height) {
    return (base * height) / 2;
}

void PrintTriangleArea(double area) {
    cout << "The area of the triangle is : " << area << endl;
}


// ==================================================
// Problem #18 - Circle Area
// ==================================================

double CalculateCircleArea(double radius) {
    return PI * radius * radius;
}

void PrintCircleArea(double area) {
    cout << "The area of the circle is : " << area << endl;
}


// ==================================================
// Problem #19 - Circle Area By Diameter
// ==================================================

double CalculateCircleAreaByDiameter(double diameter) {
    return (PI * pow(diameter, 2)) / 4;
}


// ==================================================
// Problem #20 - Circle Area Inscribed In Square
// ==================================================

double CalculateInscribedCircleArea(double squareSide) {
    return (PI * pow(squareSide, 2)) / 4;
}


// ==================================================
// Main Function - Select a Problem
// ==================================================

int main() {

    // Problem #16

    /*
    double side = ReadPositiveNumber(
        "Enter the side of the rectangle");

    double diagonal;

    do {
        diagonal = ReadPositiveNumber(
            "Enter the diagonal of the rectangle");

        if (diagonal <= side) {
            cout << "The diagonal must be greater than the side!"
                 << endl;
        }

    } while (diagonal <= side);

    PrintRectangleArea(
        CalculateRectangleAreaBySideAndDiagonal(side, diagonal));
    */


    // Problem #17

    /*
    double base = ReadPositiveNumber(
        "Enter the base of the triangle");

    double height = ReadPositiveNumber(
        "Enter the height of the triangle");

    PrintTriangleArea(
        CalculateTriangleArea(base, height));
    */


    // Problem #18

    /*
    double radius = ReadPositiveNumber(
        "Enter the radius of the circle");

    PrintCircleArea(
        CalculateCircleArea(radius));
    */


    // Problem #19

    /*
    double diameter = ReadPositiveNumber(
        "Enter the diameter of the circle");

    PrintCircleArea(
        CalculateCircleAreaByDiameter(diameter));
    */


    // Problem #20

    double squareSide = ReadPositiveNumber(
        "Enter the side length of the square");

    PrintCircleArea(
        CalculateInscribedCircleArea(squareSide));

    return 0;
}

