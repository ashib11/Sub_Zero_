#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}

// Function to get the number of days in a given month
int getDaysInMonth(int month, int year)
{
    if (month == 2)
    {
        return (isLeapYear(year) ? 29 : 28);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

// Function to print the calendar for a given month
void printCalendar(int day, int month, int year)
{
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int daysInMonth = getDaysInMonth(month, year);
    int currentDay = 1;

    for (int i = 0; i < 5; ++i)
    {
        cout << "|";
        for (int j = 0; j < 7; ++j)
        {
            if (i == 0 && j < day)
            {
                cout << setw(3) << " - ";
            }
            else if (currentDay <= daysInMonth)
            {
                cout << setw(3) << currentDay++;
            }
            else
            {
                cout << setw(3) << " - ";
            }
            cout << "|";
        }
        cout << endl
             << "|---------------------------|" << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int day, month, year;
        char dummy; // To handle the '/' character in the input

        cin >> day >> dummy >> month >> dummy >> year;

        // Adjust month to be 1-indexed
        --month;

        // Calculate the day of the week for the 1st day of the given month
        int zellerDay = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

        printCalendar(zellerDay, month + 1, year);
        cout << endl;
    }

    return 0;
}
