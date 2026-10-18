// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;



string ReadName() {
	string name;
	cout << "Enter Name : ";
	cin >> name;
	return name;
}

void PrintName(string Name) {
	cout << "\n You name is : " << Name << endl;
}



string ReadFullName() {
	string fullName;
	cout << "Enter Full Name : ";
	getline(cin, fullName);
	return fullName;
}



enum enTypeNumber { Even, Odd };

int ReadNumber() {
	int Number;
	cout << "Enter the number : ";
	cin >> Number;
	return Number;
}

enTypeNumber CheckNumberType(int Number) {
	if (Number % 2 == 0) {
		return Even;
	}
	else {
		return Odd;
	}
}

void PrintNumberType(enTypeNumber NumberType) {
	if (NumberType == Even) {
		cout << "The Number is Even";
	}
	else {
		cout << "The Number is Odd";
	}
}



struct stInfo {
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

stInfo ReadInfo() {
	stInfo info;
	string answer_License;
	string answer_Recommendation;
	cout << "Enter Your Age : ";
	cin >> info.Age;

	cout << "Do You have a driver License? (Yes/No) :  ";
	cin >> answer_License;

	if (answer_License == "Yes" || answer_License == "yes") {
		info.HasDriverLicense = true;
	}
	else {
		info.HasDriverLicense = false;
	}

	cout << "Do You have a Recommendation? (Yes/No) ";
	cin >> answer_Recommendation;
	if (answer_Recommendation == "Yes" || answer_Recommendation == "yes") {
		info.HasRecommendation = true;
	}
	else {
		info.HasRecommendation = false;
	}
	return info;
}

bool IsAccepted(stInfo info) {
	return info.HasRecommendation ||
		(info.Age > 21 && info.HasDriverLicense);
}

void PrintResult(stInfo info) {
	if (IsAccepted(info)) {
		cout << "\n Hired\n";
	}
	else {
		cout << "\n Rejected\n";
	}
}


int main()
{
	cout << "#4- Algorithm & Problem Solving - Level 1 (Solution)" << endl;


	cout << "\n\nProblem #1 To #5 Solution : \n";
	// PrintName("Mohamed");

	// PrintName(ReadName());

	// PrintName(ReadFullName());

	// PrintNumberType(CheckNumberType(ReadNumber()));

	// PrintResult(ReadInfo());


	return 0;

}

