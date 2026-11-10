
/*
====================================================
    Algorithms & Problem Solving - Level 1
    Problems #41 to #45
    Language: C++
====================================================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// ==================================================
// Problem #41 - Convert Hours to Days and Weeks
// ==================================================

float ReadPositiveNumber(string Message) {
    float number;

    do {
        cout << Message << " : ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid Input!" << Message << " : ";
        }

    } while (number <= 0);

    return number;
}

float HoursToDays(float NumberOfHours) {
    return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours) {
    return HoursToDays(NumberOfHours) / 7;
}

float DaysToWeeks(float NumberOfDays) {
    return (float)NumberOfDays / 7;
}



// ==================================================
// Problem #42 - Convert Duration to Seconds
// ==================================================

struct stDuration {
    int days;
    int hours;
    int minutes;
    int seconds;
};

stDuration ReadDuration() {
    stDuration duration;

    duration.days = ReadPositiveNumber("Please Enter Number of Days");
    duration.hours = ReadPositiveNumber("Please Enter Number of Hours");
    duration.minutes = ReadPositiveNumber("Please Enter Number of Minutes");
    duration.seconds = ReadPositiveNumber("Please Enter Number of Seconds");

    return duration;
}

int CalculateDurationToSeconds(stDuration duration) {
    int durationInSeconds;

    durationInSeconds = duration.days * 24 * 60 * 60;
    durationInSeconds += duration.hours * 60 * 60;
    durationInSeconds += duration.minutes * 60;
    durationInSeconds += duration.seconds;

    return durationInSeconds;
}



// ==================================================
// Problem #43 - Convert Seconds to Duration
// ==================================================

stDuration SecondsToDuration(int totalSeconds) {
    stDuration taskDuration;

    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerMinute = 60;

    int Reminder = 0;

    taskDuration.days = floor(totalSeconds / secondsPerDay);
    Reminder = totalSeconds % secondsPerDay;

    taskDuration.hours = floor(Reminder / secondsPerHour);
    Reminder = Reminder % secondsPerHour;

    taskDuration.minutes = floor(Reminder / secondsPerMinute);
    Reminder = Reminder % secondsPerMinute;

    taskDuration.seconds = Reminder;

    return taskDuration;
}

void PrintTaskDurationDetails(stDuration taskDuration) {
    cout << '\n';

    cout << taskDuration.days << ":"
        << taskDuration.hours << ":"
        << taskDuration.minutes << ":"
        << taskDuration.seconds;
}



// ==================================================
// Problem #44 - Get Day Name
// ==================================================

enum enDays {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int ReadNumberInRange(string message, int from, int to) {

    int number;

    do {
        cout << message;
        cin >> number;

        if (number < from || number > to) {
            cout << "Invalid input! Please enter a number.\n";
        }

    } while (number < from || number > to);

    return number;
}


enDays ReadDaysOfWeeks() {
    return (enDays)ReadNumberInRange(
        "Please Enter Days Number Mon=1, Tue=2, Wed=3, Thur=4, Fri=5, Sat=6, Sun=7 : ",
        1,
        7
    );
}

string GetDayName(enDays day) {
    switch (day) {

    case Monday:
        return "Monday";

    case Tuesday:
        return "Tuesday";

    case Wednesday:
        return "Wednesday";

    case Thursday:
        return "Thursday";

    case Friday:
        return "Friday";

    case Saturday:
        return "Saturday";

    case Sunday:
        return "Sunday";

    default:
        return "Invalid Day";
    }
}

void PrintDayName(string dayName) {

    if (dayName == "Invalid Day")
        cout << dayName << endl;
    else
        cout << "It's " << dayName << endl;
}



// ==================================================
// Problem #45 - Get Month Name
// ==================================================

enum enMonths {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

enMonths ReadMonthOfYear() {
    return (enMonths)ReadNumberInRange(
        "Please Enter Month Number Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12 : ",
        1,
        12
    );
}

string GetMonthName(enMonths month) {
    switch (month) {

    case January:
        return "January";

    case February:
        return "February";

    case March:
        return "March";

    case April:
        return "April";

    case May:
        return "May";

    case June:
        return "June";

    case July:
        return "July";

    case August:
        return "August";

    case September:
        return "September";

    case October:
        return "October";

    case November:
        return "November";

    case December:
        return "December";

    default:
        return "Invalid Month";
    }
}


void PrintMonthName(string monthName) {

    if (monthName == "Invalid Month")
        cout << monthName << endl;
    else
        cout << "It's " << monthName << endl;
}



// ==================================================
// Main Function - Select a Problem
// ==================================================

int main()
{
    // Problem #41 -

    /*
    float NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours : ");

    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours : " << NumberOfHours << '\n';
    cout << "Total Days  : " << NumberOfDays << '\n';
    cout << "Total Weeks : " << NumberOfWeeks << '\n';
    */


    // Problem #42 -

    /*
    cout << "Task Duration In Seconds : "
        << CalculateDurationToSeconds(ReadDuration())
        << " Seconds" << '\n';
    */


    // Problem #43 -

    /*
    int TotalSeconds = ReadPositiveNumber("Enter Number of Seconds ");

    PrintTaskDurationDetails(SecondsToDuration(TotalSeconds));
    */


    // Problem #44 -

    /*
    PrintDayName(GetDayName(ReadDaysOfWeeks()));
    */


    // Problem #45 -

    PrintMonthName(GetMonthName(ReadMonthOfYear()));


    return 0;
}

