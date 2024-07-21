#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
enum enLeapNotLeap { NotLeapYear, LeapYear = 1 };
short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}
bool LeapYearNotLeapYear(int Number)
{
    if ((Number % 400 == 0)||(Number % 4 == 0 && Number % 100 != 0))
    {
        return enLeapNotLeap::LeapYear;
    }
    else if(Number%100==0)
    {
        return enLeapNotLeap::NotLeapYear;
    }
    else if (Number % 4 == 0)
    {
        return enLeapNotLeap::LeapYear;
    }
    else
    {
        return enLeapNotLeap::NotLeapYear;
    }
}

int main()
{
    short Year = ReadYear();
    if (LeapYearNotLeapYear(Year))
    {
        cout << "\nYes, Year [" << Year << "] is a leap year.\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
    }
    

    return 0;
}
